/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eperrier <eperrier@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 17:38:54 by evdalmas          #+#    #+#             */
/*   Updated: 2024/08/07 19:0:06 by eperrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BSQ.h"

char	*read_line_from_file(int fd, char *buffer)
{
	char	*line;
	int		char_count;

	line = allocate_line();
	char_count = 0;
	while (read(fd, buffer, 1) > 0)
	{
		if (*buffer == '\n')
			break ;
		line[char_count++] = *buffer;
	}
	line[char_count] = '\0';
	return (line);
}

char	**process_file_content(int fd, char *buffer)
{
	char	**array;
	char	*line;
	int		line_count;

	array = allocate_array();
	line_count = 0;
	line = read_line_from_file(fd, buffer);
	while (line && *line != '\0')
	{
		line = read_line_from_file(fd, buffer);
		array[line_count++] = line;
	}
	array[line_count] = NULL;
	return (array);
}

char	**read_file_to_array(const char *filename)
{
	int		fd;
	char	*buffer;
	char	**array;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		write(2, "Error opening file\n", 19);
		exit(1);
	}
	buffer = allocate_buffer();
	array = process_file_content(fd, buffer);
	free(buffer);
	close(fd);
	return (array);
}

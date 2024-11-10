/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_value.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evdalmas <evdalmas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 14:05:42 by evdalmas          #+#    #+#             */
/*   Updated: 2024/08/07 23:22:21 by evdalmas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BSQ.h"

int	check_unique_elements(char **answer)
{
	if (ft_strcmp(answer[0], answer[1], answer[2]) == 0)
	{
		return (1);
	}
	return (0);
}

char	**get_information(char *start)
{
	char	**answer;
	int		len;

	len = 0;
	while (start[len] != '\n' && start[len] != '\0')
		len++;
	answer = allocate_and_initialize_answer(start, len);
	if (answer[0][0] == '0' || answer[0][0] == '\0')
	{
		write(1, "map error\n", 11);
		return (NULL);
	}
	if (check_unique_elements(answer))
	{
		write(1, "map error\n", 11);
		return (NULL);
	}
	return (answer);
}

int	check_value(char *start, char **info)
{
	while (*start != '\n')
	{
		start++;
	}
	start++;
	while (*start)
	{
		if (*start != info[1][0] && *start != info[2][0])
			if (*start != '\n')
				return (0);
		start++;
	}
	return (1);
}

int	check_tab2(char **info, char *buffer)
{
	if (!initial_validation(info, buffer))
		return (0);
	if (!remaining_validation(info, buffer))
		return (0);
	return (1);
}

int	check_tab(char *filename)
{
	char	buffer[1024];
	int		fd;
	ssize_t	bytesread;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		write(1, "map error\n", 11);
		return (0);
	}
	bytesread = read(fd, buffer, sizeof(buffer) - 1);
	if (bytesread < 0)
	{
		close(fd);
		write(1, "map error\n", 11);
		return (0);
	}
	buffer[bytesread] = '\0';
	if (check_tab2(get_information(buffer), buffer))
		return (0);
	close(fd);
	return (1);
}

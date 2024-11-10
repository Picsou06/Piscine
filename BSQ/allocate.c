/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   allocate.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evdalmas <evdalmas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 19:29:32 by evdalmas          #+#    #+#             */
/*   Updated: 2024/08/07 23:14:36 by evdalmas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BSQ.h"

char	**allocate_array(void)
{
	char	**array;

	array = malloc(sizeof(char *) * 10);
	if (!array)
	{
		write(2, "Memory allocation error\n", 24);
		exit(1);
	}
	return (array);
}

char	*allocate_line(void)
{
	char	*line;

	line = malloc(sizeof(char) * 100);
	if (!line)
	{
		write(2, "Memory allocation error\n", 24);
		exit(1);
	}
	return (line);
}

char	*allocate_buffer(void)
{
	char	*buffer;

	buffer = malloc(1);
	if (!buffer)
	{
		write(2, "Memory allocation error\n", 24);
		exit(1);
	}
	return (buffer);
}

char	**allocate_and_initialize_answer(char *start, int len)
{
	char	**answer;
	int		i;

	answer = (char **)malloc(4 * sizeof(char *));
	i = 0;
	while (i < 4)
	{
		answer[i] = (char *)malloc((len + 1) * sizeof(char));
		i++;
	}
	i = 0;
	while (i < 4)
	{
		answer[3 - i][0] = start[len - 1 - i];
		answer[3 - i][1] = '\0';
		i++;
	}
	i = 0;
	while (i < len - 3)
	{
		answer[0][i] = start[i];
		i++;
	}
	answer[0][len - 3] = '\0';
	return (answer);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evdalmas <evdalmas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 16:30:09 by eperrier          #+#    #+#             */
/*   Updated: 2024/08/07 23:05:39 by evdalmas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BSQ.h"

int	count_lines(char *start)
{
	int	answer;

	answer = 0;
	while (*start)
	{
		if (*start == '\n')
			answer++;
		start++;
	}
	return (answer - 1);
}

int	count_char_by_line(char *start)
{
	int	nb;
	int	temp;

	nb = 0;
	temp = 0;
	while (*start != '\n')
		start++;
	start++;
	while (start[nb] != '\n' && start[nb] != '\0')
		nb++;
	while (*start)
	{
		if (*start == '\n')
		{
			if (temp != nb)
				return (0);
			temp = -1;
		}
		start++;
		temp++;
	}
	return (1);
}

int	count_char_by_line2(char *start)
{
	int	nb;

	nb = 0;
	while (*start)
	{
		if (*start == '\0')
		{
			return (nb);
		}
		nb++;
		start++;
	}
	return (nb);
}

char	**extern_get_information(char *filename)
{
	char	buffer[1024];
	int		fd;
	ssize_t	bytesread;

	fd = open(filename, O_RDONLY);
	bytesread = read(fd, buffer, sizeof(buffer) - 1);
	buffer[bytesread] = '\0';
	close(fd);
	return (get_information(buffer));
}

int	get_max_table(char **table, char **tab_type)
{
	int	max;
	int	rows;
	int	cols;
	int	i;
	int	j;

	rows = ft_atoi(tab_type[0]);
	cols = count_char_by_line2(table[0]);
	max = table[0][0] - '0';
	i = 0;
	while (i < rows)
	{
		j = 0;
		while (j < cols)
		{
			if (table[i][j] - '0' > max)
				max = table[i][j] - '0';
			j++;
		}
		i++;
	}
	return (max);
}

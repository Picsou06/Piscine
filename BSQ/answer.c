/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   answer.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evdalmas <evdalmas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 20:14:22 by evdalmas          #+#    #+#             */
/*   Updated: 2024/08/07 22:24:00 by evdalmas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BSQ.h"

int	**get_answered_occurence(int i, int j)
{
	int	**result;

	result = (int **)malloc(2 * sizeof(int *));
	result[0] = (int *)malloc(sizeof(int));
	result[1] = (int *)malloc(sizeof(int));
	result[0][0] = i - 1;
	result[1][0] = j - 1;
	return (result);
}

int	**find_occurrence(char **arr, int nb, char **tab_type)
{
	int	i;
	int	j;
	int	**result;
	int	rows;
	int	cols;

	rows = ft_atoi(tab_type[0]);
	cols = count_char_by_line2(arr[0]);
	result = (int **)malloc(2 * sizeof(int *));
	result[0] = (int *)malloc(sizeof(int));
	result[1] = (int *)malloc(sizeof(int));
	i = 0;
	while (i++ < rows)
	{
		j = 0;
		while (j++ < cols)
		{
			if (arr[i - 1][j - 1] - '0' == nb)
				return (get_answered_occurence(i, j));
		}
	}
	return (NULL);
}

void	verify(char **table, char **tab_type, int change)
{
	int	i;
	int	j;

	j = 0;
	if (change == 0)
	{
		while (j <= *tab_type[0])
		{
			i = 0;
			while (i <= count_char_by_line2(table[0])
				&& table[i][j] != *tab_type[1])
			{
				i++;
			}
			if (table[i][j] == *tab_type[1])
			{
				table[i][j] = *tab_type[3];
				break ;
			}
			j++;
		}
	}
}

char	**transform_table(char **table, int **pos, int max, char **tab_type)
{
	int	i;
	int	j;
	int	rows;
	int	cols;
	int	change;

	rows = *pos[0];
	cols = *pos[1];
	i = 0;
	change = 0;
	while (i < max)
	{
		j = 0;
		while (j < max)
		{
			table[rows - i][cols - j] = *tab_type[3];
			j++;
			change = 1;
		}
		i++;
	}
	verify(table, tab_type, change);
	return (table);
}

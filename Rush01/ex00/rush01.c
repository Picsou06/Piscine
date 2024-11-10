/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evdalmas <evdalmas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 08:41:03 by tanton            #+#    #+#             */
/*   Updated: 2024/07/28 16:14:59 by evdalmas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "hints.h"

int	solve(int **grid, int row, int col, t_hints hints)
{
	int	num;

	if (row == 4)
		return (1);
	if (col == 4)
		return (solve(grid, row + 1, 0, hints));
	num = 1;
	while (num <= 4)
	{
		grid[row][col] = num;
		if (is_valid_placement(grid, row, col, hints))
		{
			if (solve(grid, row, col + 1, hints))
				return (1);
		}
		grid[row][col] = 0;
		num++;
	}
	return (0);
}

void	free_table(int **table)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		free(table[i]);
		i++;
	}
	free(table);
}

void	show_table(int *table[])
{
	char	c;
	int		i;
	int		j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			write(1, " ", 1);
			c = table[i][j] + 48;
			write(1, &c, 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
	free_table(table);
}

int	**create_table(void)
{
	int	**table;
	int	count1;
	int	count2;

	count1 = 0;
	count2 = 0;
	table = (int **)malloc(4 * sizeof(int *));
	while (count1 < 4)
	{
		table[count1] = (int *)malloc(4 * sizeof(int));
		count2 = 0;
		while (count2 < 4)
		{
			table[count1][count2] = 0;
			count2++;
		}
		count1++;
	}
	return (table);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_col_row.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evdalmas <evdalmas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 11:20:05 by tanton            #+#    #+#             */
/*   Updated: 2024/07/28 16:14:59 by evdalmas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "hints.h"

int	check_row_left(int row, t_hints hints, int **grid)
{
	int	i;
	int	max_height;
	int	visible_count;

	i = 0;
	max_height = 0;
	visible_count = 0;
	while (i < 4)
	{
		if (grid[row][i] > max_height)
		{
			max_height = grid[row][i];
			visible_count++;
		}
		i++;
	}
	return (visible_count == hints.left_hints[row]);
}

int	check_row_right(int row, t_hints hints, int **grid)
{
	int	i;
	int	max_height;
	int	visible_count;

	i = 3;
	max_height = 0;
	visible_count = 0;
	while (i >= 0)
	{
		if (grid[row][i] > max_height)
		{
			max_height = grid[row][i];
			visible_count++;
		}
		i--;
	}
	return (visible_count == hints.right_hints[row]);
}

int	check_col_top(int col, t_hints hints, int **grid)
{
	int	i;
	int	max_height;
	int	visible_count;

	i = 0;
	max_height = 0;
	visible_count = 0;
	while (i < 4)
	{
		if (grid[i][col] > max_height)
		{
			max_height = grid[i][col];
			visible_count++;
		}
		i++;
	}
	return (visible_count == hints.top_hints[col]);
}

int	check_col_bottom(int col, t_hints hints, int **grid)
{
	int	i;
	int	max_height;
	int	visible_count;

	i = 3;
	max_height = 0;
	visible_count = 0;
	while (i >= 0)
	{
		if (grid[i][col] > max_height)
		{
			max_height = grid[i][col];
			visible_count++;
		}
		i--;
	}
	return (visible_count == hints.bottom_hints[col]);
}

int	is_valid_placement(int **grid, int row, int col, t_hints hints)
{
	int	i;

	i = 0;
	while (i < col)
	{
		if (grid[row][i] == grid[row][col])
			return (0);
		i++;
	}
	i = 0;
	while (i < row)
	{
		if (grid[i][col] == grid[row][col])
			return (0);
		i++;
	}
	if (col == 3 && !check_row_left(row, hints, grid))
		return (0);
	if (col == 3 && !check_row_right(row, hints, grid))
		return (0);
	if (row == 3 && !check_col_top(col, hints, grid))
		return (0);
	if (row == 3 && !check_col_bottom(col, hints, grid))
		return (0);
	return (1);
}

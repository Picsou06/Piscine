/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   processing.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evdalmas <evdalmas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 19:38:31 by evdalmas          #+#    #+#             */
/*   Updated: 2024/08/07 23:09:35 by evdalmas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BSQ.h"

static char	**allocate_modified_array(int rows, int cols)
{
	char	**modifiedarray;
	int		i;

	modifiedarray = (char **)malloc(rows * sizeof(char *));
	if (!modifiedarray)
		return (NULL);
	i = 0;
	while (i < rows)
	{
		modifiedarray[i] = (char *)malloc(cols * sizeof(char));
		if (!modifiedarray[i])
			return (NULL);
		i++;
	}
	return (modifiedarray);
}

static int	get_min_value(char **modifiedarray, int i, int j)
{
	int	min;

	min = modifiedarray[i - 1][j - 1];
	if (modifiedarray[i - 1][j] < min)
		min = modifiedarray[i - 1][j];
	if (modifiedarray[i][j - 1] < min)
		min = modifiedarray[i][j - 1];
	return (min);
}

static void	fill_modified_array(char **array, char **modifiedarray, int rows,
		int cols)
{
	int	i;
	int	j;
	int	min;

	i = 0;
	while (i < rows)
	{
		j = 0;
		while (j < cols)
		{
			if (i == 0 || j == 0 || array[i][j] == '0')
				modifiedarray[i][j] = array[i][j];
			else
			{
				min = get_min_value(modifiedarray, i, j);
				modifiedarray[i][j] = min + 1;
			}
			j++;
		}
		i++;
	}
}

char	**modifyarray(char **array, char **tab_type)
{
	char	**modifiedarray;
	int		rows;
	int		cols;

	rows = ft_atoi(tab_type[0]);
	cols = count_char_by_line2(array[0]);
	modifiedarray = allocate_modified_array(rows, cols);
	if (!modifiedarray)
		return (NULL);
	fill_modified_array(array, modifiedarray, rows, cols);
	return (modifiedarray);
}

int	check_char_count(char *buffer, int rows, int cols)
{
	int	i;
	int	count;
	int	expected_count;

	count = 0;
	i = 0;
	while (buffer[i] != '\n')
	{
		i++;
	}
	i++;
	while (buffer[i] != '\0')
	{
		if (buffer[i] != '\n' && buffer[i] != '\0')
			count++;
		i++;
	}
	expected_count = rows * cols;
	return (count == expected_count);
}

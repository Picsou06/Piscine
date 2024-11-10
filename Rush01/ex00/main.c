/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evdalmas <evdalmas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 01:00:45 by evdalmas          #+#    #+#             */
/*   Updated: 2024/07/28 16:20:36 by evdalmas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "hints.h"

void	ft_hints(char *argv, t_hints *hints)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	while (i < 32)
	{
		if (i % 2 == 0)
		{
			if (i < 8)
				hints->top_hints[j] = ft_atoi(&argv[i]);
			else if (i < 16)
				hints->bottom_hints[j] = ft_atoi(&argv[i]);
			else if (i < 24)
				hints->left_hints[j] = ft_atoi(&argv[i]);
			else if (i < 32)
				hints->right_hints[j] = ft_atoi(&argv[i]);
			j++;
		}
		i++;
		if (j == 4)
			j = 0;
	}
}

int	main(int argc, char *argv[])
{
	t_hints	hints;
	int		**table;

	if (argc == 2)
	{
		if (check_args (argv[1]))
		{
			ft_hints(argv[1], &hints);
			table = create_table();
			if (solve(table, 0, 0, hints))
			{
				show_table(table);
				return (0);
			}
		}
	}
	write(1, "Error\n", 6);
	return (0);
}

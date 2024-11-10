/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hints.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evdalmas <evdalmas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 11:27:53 by tanton            #+#    #+#             */
/*   Updated: 2024/07/28 16:14:59 by evdalmas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HINTS_H
# define HINTS_H

typedef struct s_hints
{
	int	top_hints[4];
	int	bottom_hints[4];
	int	left_hints[4];
	int	right_hints[4];
}	t_hints;

void	ft_hints(char *argv, t_hints *hints);
int		ft_atoi(char *str);
int		solve(int **grid, int row, int col, t_hints hints);
int		is_valid_placement(int **grid, int row, int col, t_hints hints);
int		check_args(char	*hints);
int		**create_table(void);
void	show_table(int *table[]);
void	rush01(int *keys);

#endif
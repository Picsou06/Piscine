/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_tab.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eperrier <eperrier@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 17:06:58 by eperrier          #+#    #+#             */
/*   Updated: 2024/08/07 19:43:01 by eperrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BSQ.h"

void	print_tab(char **tab, char **tab_type)
{
	int	i;
	int	j;

	i = 0;
	while (i < ft_atoi(tab_type[0]))
	{
		j = 0;
		while (j < count_char_by_line2(tab[0]))
		{
			write(1, &tab[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

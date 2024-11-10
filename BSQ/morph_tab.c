/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   morph_tab.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eperrier <eperrier@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 16:38:03 by eperrier          #+#    #+#             */
/*   Updated: 2024/08/07 19:43:01 by eperrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BSQ.h"

char	**morph_tab(char **tab, char **tab_type)
{
	char	**answer;
	int		i;
	int		j;
	int		rows;
	int		cols;

	i = 0;
	rows = ft_atoi(tab_type[0]);
	cols = count_char_by_line2(tab[0]);
	answer = (char **)malloc(rows * sizeof(char *));
	while (i++ < rows)
	{
		answer[i - 1] = (char *) malloc((cols + 1) * sizeof(char));
		j = 0;
		while (j < cols)
		{
			if (tab[i - 1][j] == *tab_type[1])
				answer[i - 1][j] = '1';
			else if (tab[i - 1][j] == *tab_type[2])
				answer[i - 1][j] = '0';
			j++;
		}
		answer[i - 1][j] = '\0';
	}
	return (answer);
}

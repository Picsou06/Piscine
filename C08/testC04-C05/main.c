/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evdalmas <evdalmas@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 16:10:46 by evdalmas          #+#    #+#             */
/*   Updated: 2024/08/01 16:14:07 by evdalmas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "ft_stock_str.h"

int	main(void)
{
	char *strs[] = {"Hello", "World", "42", "School"};
	int size = 4;

	struct s_stock_str *tab = ft_strs_to_tab(size, strs);
	if (tab == NULL)
	{
		printf("Error: Memory allocation failed\n");
		return (1);
	}
	ft_show_tab(tab);
	int i = 0;
	while (i < size)
	{
		free(tab[i].copy);
		i++;
	}
	free(tab);
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evdalmas <evdalmas@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 11:54:07 by evdalmas          #+#    #+#             */
/*   Updated: 2024/07/22 12:00:25 by evdalmas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt_find(int nb, int i)
{
	if (i * i == nb)
		return (i);
	if (i * i < nb)
		return (ft_sqrt_find(nb, i + 1));
	else
		return (0);
}

int	ft_sqrt(int nb)
{
	return (ft_sqrt_find(nb, 0));
}
/*
int	main(void)
{
	printf("Racine de 64: %d \n",ft_sqrt(64));
	printf("Racine de 20: %d \n",ft_sqrt(20));
}*/

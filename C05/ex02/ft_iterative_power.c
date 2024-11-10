/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evdalmas <evdalmas@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 09:16:38 by evdalmas          #+#    #+#             */
/*   Updated: 2024/07/22 09:31:14 by evdalmas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	answer;

	answer = 1;
	if (power < 0)
	{
		return (0);
	}
	if (power == 0)
	{
		return (1);
	}
	while (power >= 1)
	{
		answer = answer * nb;
		power--;
	}
	return (answer);
}
/*
int	main(void)
{
	printf("0 ** -1, %d \n", ft_iterative_power(0, -1));
	printf("8 ** 4, %d \n", ft_iterative_power(8, 4));
	printf("10 ** 0, %d \n", ft_iterative_power(10, 0));
}*/

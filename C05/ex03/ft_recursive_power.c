/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evdalmas <evdalmas@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 09:16:38 by evdalmas          #+#    #+#             */
/*   Updated: 2024/07/23 16:44:05 by evdalmas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
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
	if (power >= 1)
	{
		answer = nb * ft_recursive_power(nb, power - 1);
	}
	return (answer);
}
/*
int	main(void)
{
	printf("0 ** -1, %d \n", ft_recursive_power(0, -1));
	printf("8 ** 4, %d \n", ft_recursive_power(8, 4));
	printf("10 ** 0, %d \n", ft_recursive_power(10, 0));
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evdalmas <evdalmas@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 09:03:32 by evdalmas          #+#    #+#             */
/*   Updated: 2024/07/22 09:13:31 by evdalmas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	int	answer;

	answer = 1;
	if (nb < 0)
	{
		return (0);
	}
	if (nb > 1)
	{
		answer = nb * ft_recursive_factorial(nb - 1);
	}
	return (answer);
}
/*
int	main(void)
{
	printf("Pour nb = 5: %d \n", ft_recursive_factorial(5));
	printf("Pour nb = -5: %d \n", ft_recursive_factorial(-5));
	printf("Pour nb = 0: %d \n", ft_recursive_factorial(0));
}*/

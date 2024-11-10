/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evdalmas <evdalmas@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 09:03:32 by evdalmas          #+#    #+#             */
/*   Updated: 2024/07/22 09:08:26 by evdalmas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	answer;
	int	compteur;

	answer = 1;
	compteur = 1;
	if (nb < 0)
	{
		return (0);
	}
	while (compteur < nb)
	{
		answer += answer * compteur;
		compteur++;
	}
	return (answer);
}
/*
int	main(void)
{
	printf("Pour nb = 5: %d \n", ft_iterative_factorial(5));
	printf("Pour nb = -5: %d \n", ft_iterative_factorial(-5));
	printf("Pour nb = 0: %d \n", ft_iterative_factorial(0));
}*/

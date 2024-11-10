/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evdalmas <evdalmas@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 11:54:07 by evdalmas          #+#    #+#             */
/*   Updated: 2024/07/24 11:20:29 by evdalmas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	answer;
	int	compteur;

	answer = 1;
	compteur = 2;
	if (nb <= 1)
		return (0);
	while (compteur != 10)
	{
		if (compteur != nb)
		{
			if (nb % compteur == 0)
			{
				answer = 0;
			}
		}
		compteur++;
	}
	return (answer);
}
/*
int	main(void)
{
	printf("64 is prime: %d \n",ft_is_prime(0));
	printf("13 is prime: %d \n",ft_is_prime(1));
}*/

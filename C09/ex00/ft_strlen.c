/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evdalmas <evdalmas@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 10:02:00 by evdalmas          #+#    #+#             */
/*   Updated: 2024/07/21 18:37:08 by evdalmas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	compteur;

	compteur = 0;
	while (*str)
	{
		str++;
		compteur++;
	}
	return (compteur);
}

/*
int	main()
{
	printf("%d \n", ft_strlen("salut"));
	printf("%d \n", ft_strlen(""));
	printf("%d \n", ft_strlen("1"));
}*/

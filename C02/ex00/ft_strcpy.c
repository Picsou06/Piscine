/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evdalmas <evdalmas@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 11:34:30 by evdalmas          #+#    #+#             */
/*   Updated: 2024/07/19 11:40:53 by evdalmas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int main()
{
    char src[] = "Bonjour, monde!";
    char dest1[50]; // Pour ft_strcpy
    char dest2[50]; // Pour strncpy

    ft_strcpy(dest1, src);
    printf("Résultat de ft_strcpy: %s\n", dest1);

    strcpy(dest2, src);
    printf("Résultat de strcpy: %s\n", dest2);

    return 0;
}*/

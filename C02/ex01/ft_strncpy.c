/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evdalmas <evdalmas@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 21:45:43 by evdalmas          #+#    #+#             */
/*   Updated: 2024/07/20 00:15:35 by evdalmas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*
int main()
{
    char src[] = "Bonjour, monde!";
    char dest1[50]; // Pour ft_strcpy
    char dest2[50]; // Pour strncpy
    unsigned int n = 10; // Nombre de caractères à copier

    // Utilisation de votre fonction
    ft_strncpy(dest1, src, n);
    printf("Résultat de ft_strcpy: %s\n", dest1);

    // Utilisation de la fonction standard strncpy
    strncpy(dest2, src, n);
    printf("Résultat de strncpy: %s\n", dest2);

    return 0;
}*/

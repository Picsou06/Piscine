/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evdalmas <evdalmas@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 01:34:06 by evdalmas          #+#    #+#             */
/*   Updated: 2024/07/21 08:02:09 by evdalmas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, const char *src)
{
	char	*original_dest;

	original_dest = dest;
	while (*dest)
	{
		dest++;
	}
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (original_dest);
}
/*
int main() {
    char dest[50] = "Hello, ";
    char src[] = "World!";

    printf("Avant ft_strcat :\n");
    printf("dest = \"%s\"\n", dest);
    printf("src = \"%s\"\n\n", src);

    ft_strcat(dest, src);

    printf("Après ft_strcat :\n");
    printf("dest = \"%s\"\n", dest);

    // Comparaison avec strcat standard
    char dest2[50] = "Hello, ";
    printf("\nComparaison avec strcat standard :\n");
    printf("strcat : \"%s\"\n", strcat(dest2, src));

    return 0;
}*/

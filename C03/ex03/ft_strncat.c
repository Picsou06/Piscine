/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evdalmas <evdalmas@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 01:34:06 by evdalmas          #+#    #+#             */
/*   Updated: 2024/07/21 10:44:12 by evdalmas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, const char *src, unsigned int nb)
{
	unsigned int	i;
	char			*original_dest;

	original_dest = dest;
	while (*dest)
	{
		dest++;
	}
	i = 0;
	while (*src && i < nb)
	{
		*dest = *src;
		dest++;
		src++;
		i++;
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

    ft_strncat(dest, src, 2);

    printf("Après ft_strcat :\n");
    printf("dest = \"%s\"\n", dest);

    // Comparaison avec strcat standard
    char dest2[50] = "Hello, ";
    printf("\nComparaison avec strcat standard :\n");
    printf("strcat : \"%s\"\n", strncat(dest2, src, 2));

    return 0;
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evdalmas <evdalmas@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 00:34:58 by evdalmas          #+#    #+#             */
/*   Updated: 2024/07/21 08:16:45 by evdalmas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && (s1[i] != '\0' || s2[i] != '\0'))
	{
		if (s1[i] != s2[i])
		{
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		}
		i++;
	}
	return (0);
}

/*
int main() {
    char dest[50] = "Hello, ";
    char src[] = "World!";

    printf("Avant ft_strcat :\n");
    printf("dest = \"%s\"\n", dest);
    printf("src = \"%s\"\n\n", src);

    int answer = ft_strncmp(dest, src, 5);

    printf("Après ft_strcat :\n");
    printf("answer = \"%d\"\n", answer);

    // Comparaison avec strcat standard
    printf("\nComparaison avec strncmp standard :\n");
    answer = strncmp(dest, src, 5);
    printf("strcat : \"%d\"\n", answer);

    return 0;
}*/

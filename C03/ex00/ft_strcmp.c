/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evdalmas <evdalmas@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 00:34:58 by evdalmas          #+#    #+#             */
/*   Updated: 2024/07/20 00:49:01 by evdalmas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	end;

	i = 0;
	end = 0;
	while (s1[i] == s2[i] && end == 0)
	{
		if (s1[i] != '\0' && s2[i] != '\0')
		{
			i++;
		}
		else
		{
			end = 1;
		}
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

/*
int main()
{
    // Cas de test
    char *test1_a = "abc";
    char *test1_b = "abc";
    char *test2_a = "abc";
    char *test2_b = "abcd";
    char *test3_a = "abcd";
    char *test3_b = "abc";
    char *test4_a = "abc";
    char *test4_b = "abC";
    char *test5_a = "abc";
    char *test5_b = "aBc";
    char *test6_a = "abc";
    char *test6_b = "abc ";

    // Exécution des tests
    printf("Test 1: %d (attendu: 0)\n", ft_strcmp(test1_a, test1_b));
    printf("Test 2: %d (attendu: < 0)\n", ft_strcmp(test2_a, test2_b));
    printf("Test 3: %d (attendu: > 0)\n", ft_strcmp(test3_a, test3_b));
    return 0;
}*/

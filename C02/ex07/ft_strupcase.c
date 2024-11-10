/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evdalmas <evdalmas@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 21:45:43 by evdalmas          #+#    #+#             */
/*   Updated: 2024/07/19 22:25:51 by evdalmas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}
/*
int main()
{
    char test_strings[][50] = {
        "123456789",
        "0123E56789",
        "Mixed123Case",
        "asdfghjkk",
        "!@#$%^&*()",
        "     ",
        "1 gg",
        "1 GGf"
    };
    int num_tests = sizeof(test_strings) / sizeof(test_strings[0]);
    for (int i = 0; i < num_tests; i++)
    {
        printf("Original String: \"%s\"\n", test_strings[i]);
        printf("Uppercase String: \"%s\"\n\n", ft_strupcase(test_strings[i]));
    }
    return 0;
}*/

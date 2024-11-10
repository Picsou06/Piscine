/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evdalmas <evdalmas@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 21:45:43 by evdalmas          #+#    #+#             */
/*   Updated: 2024/07/19 21:29:40 by evdalmas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;
	int	answer;

	i = 0;
	answer = 1;
	while (str[i] != '\0' && answer == 1)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			i++;
		}
		else
		{
			answer = 0;
		}
	}
	return (answer);
}
/*
int main()
{
    char *test_strings[] = {
        "HelloWorld",
        "Hello123World",
        "ALLCAPS",
        "lowercase",
        "Mixed123Case",
        "",
        "!@#$%^&*()",
        "AlphaNumer1c",
        "     ",
        "qwer ty"
    };
    int num_tests = sizeof(test_strings) / sizeof(test_strings[0]);
    for (int i = 0; i < num_tests; i++)
    {
        int result = ft_str_is_lowercase(test_strings[i]);
        printf("String: \"%s\"\n", test_strings[i]);
        printf("Is alphabetic: %s\n\n", result ? "Yes" : "No");
    }
}*/

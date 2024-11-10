/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evdalmas <evdalmas@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 21:45:43 by evdalmas          #+#    #+#             */
/*   Updated: 2024/07/19 21:26:02 by evdalmas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_str_is_numeric(char *str)
{
	int	i;
	int	answer;

	i = 0;
	answer = 1;
	while (str[i] != '\0' && answer == 1)
	{
		if (str[i] >= '0' && str[i] <= '9')
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
        "123456789",
        "0123E56789",
        "Mixed123Case",
        "",
        "!@#$%^&*()",
        "     ",
        "1 2",
	"1"
    };
    int num_tests = sizeof(test_strings) / sizeof(test_strings[0]);
    for (int i = 0; i < num_tests; i++)
    {
        int result = ft_str_is_numeric(test_strings[i]);
        printf("String: \"%s\"\n", test_strings[i]);
        printf("Is numeric: %s\n\n", result ? "Yes" : "No");
    }
}*/

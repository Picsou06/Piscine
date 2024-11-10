/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evdalmas <evdalmas@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 10:21:58 by evdalmas          #+#    #+#             */
/*   Updated: 2024/07/21 15:11:02 by evdalmas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_is_space(char c)
{
	if (c == '\t' || c == '\n' || c == '\r')
		return (1);
	if (c == '\v' || c == '\f' || c == ' ')
		return (1);
	return (0);
}

int	ft_atoi(char *str)
{
	int	sign;
	int	result;
	int	i;

	sign = 1;
	result = 0;
	i = 0;
	while (ft_is_space(*str))
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*(str++) == '-')
			sign *= -1;
	}
	while (*str)
	{
		if (*str >= '0' && *str <= '9')
		{
			result *= 10;
			result += (*(str++) - '0');
		}
		else
			return (result * sign);
	}
	return (result * sign);
}

/*
int main()
{
    char *test_cases[] = {
        "123",
        "-123",
        "+123",
        "  123",
        "\t\n\v\f\r123",
        "  -+--123",
        "  +-+-123ab567",
        "2147483647",  // INT_MAX
        "-2147483648", // INT_MIN
    };

    int i = 0;
    while (test_cases[i] != NULL)
    {
        printf("Test case: \"%s\"\n", test_cases[i]);
        printf("ft_atoi: %d\n", ft_atoi(test_cases[i]));
        printf("atoi:    %d\n", atoi(test_cases[i]));
        printf("\n");
        i++;
    }

    return 0;
}*/

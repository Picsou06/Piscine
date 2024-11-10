/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evdalmas <evdalmas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 13:32:21 by tanton            #+#    #+#             */
/*   Updated: 2024/07/28 16:14:59 by evdalmas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "hints.h"

int	test_signe(char *str, int *i)
{
	int	signe;

	signe = 1;
	while (str[*i] == '-' || str[*i] == '+')
	{
		if (str[*i] == '-')
		{
			if (signe == 1)
				signe = -1;
			else
				signe = 1;
		}
		*i = *i + 1;
	}
	return (signe);
}

int	ft_atoi(char *str)
{
	int		i;
	int		sign;
	int		result;

	i = 0;
	result = 0;
	while (str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r'))
		i++;
	sign = test_signe(str, &i);
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result * sign);
}
/*int	main(void)
{
	char str[] = "  -+-+12734";
	int result = ft_atoi(str);
	printf("%d\n", result);
	return (0);
}*/

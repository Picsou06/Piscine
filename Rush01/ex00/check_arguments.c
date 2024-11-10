/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_arguments.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evdalmas <evdalmas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 15:28:30 by evdalmas          #+#    #+#             */
/*   Updated: 2024/07/28 16:14:59 by evdalmas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	count_args(char *hints)
{
	int	answer;

	answer = 0;
	while (*hints)
	{
		answer++;
		hints++;
	}
	return (answer);
}

int	check_args(char	*hints)
{
	int	answer;
	int	i;

	answer = 0;
	i = 0;
	if (count_args(hints) != 31)
	{
		return (0);
	}
	while (i < 32)
	{
		if (i % 2 == 0)
		{
			if (hints[i] >= '1' && hints[i] <= '4')
			{
				answer++;
			}
		}
		i++;
	}
	return (answer == 16);
}

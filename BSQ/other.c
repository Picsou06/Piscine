/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   other.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evdalmas <evdalmas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 23:06:21 by evdalmas          #+#    #+#             */
/*   Updated: 2024/08/07 23:20:57 by evdalmas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BSQ.h"

int	realy_count_char_by_line2(char *start)
{
	int	nb;

	nb = 0;
	while (*start != '\n')
		start++;
	start++;
	while (*start)
	{
		if (*start == '\n')
		{
			return (nb);
		}
		nb++;
		start++;
	}
	return (nb);
}

int	remaining_validation(char **info, char *buffer)
{
	int	temp;

	temp = realy_count_char_by_line2(buffer);
	if (!check_char_count(buffer, ft_atoi(info[0]), temp))
	{
		write(1, "map error\n", 11);
		return (0);
	}
	if (!check_value(buffer, info))
	{
		write(1, "map error\n", 11);
		return (0);
	}
	if (!count_char_by_line(buffer))
	{
		write(1, "map-error\n", 11);
		return (0);
	}
	return (1);
}

int	initial_validation(char **info, char *buffer)
{
	if (count_lines(buffer) < 1)
	{
		write(1, "map error\n", 11);
		return (0);
	}
	if (ft_atoi(info[0]) != count_lines(buffer))
	{
		write(1, "map error\n", 11);
		return (0);
	}
	return (1);
}

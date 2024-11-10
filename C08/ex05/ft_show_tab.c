/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evdalmas <evdalmas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 10:47:45 by evdalmas          #+#    #+#             */
/*   Updated: 2024/08/01 15:53:29 by evdalmas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stddef.h>
#include "ft_stock_str.h"

char	*inttostring(int number)
{
	static char	str[12];
	char		*ptr;

	ptr = str + 11;
	while (number != 0)
	{
		*--ptr = (number % 10) + '0';
		number /= 10;
	}
	return (ptr);
}

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

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].str != 0)
	{
		write(1, par[i].str, ft_strlen(par[i].str));
		write(1, "\n", 1);
		write(1, inttostring(par[i].size), ft_strlen(inttostring(par[i].size)));
		write(1, "\n", 1);
		write(1, par[i].copy, ft_strlen(par[i].copy));
		write(1, "\n", 1);
		i++;
	}
}

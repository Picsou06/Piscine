/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anbarthe <anbarthe@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 22:15:12 by anbarthe          #+#    #+#             */
/*   Updated: 2024/07/21 09:26:27 by evdalmas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ligne_type_0_1(int number_char)
{
	int	counter;

	ft_putchar('/');
	counter = 2;
	while (counter < number_char)
	{
		ft_putchar('*');
		counter++;
	}
	if (number_char > 1)
	{
		ft_putchar('\\');
	}
	ft_putchar(10);
}

void	ligne_type_1_1(int number_char)
{
	int	counter;

	ft_putchar('*');
	counter = 2;
	while (counter < number_char)
	{
		ft_putchar(' ');
		counter++;
	}
	if (number_char > 1)
	{
		ft_putchar('*');
	}
	ft_putchar(10);
}

void	ligne_type_3_1(int number_char)
{
	int	counter;

	ft_putchar('\\');
	counter = 2;
	while (counter < number_char)
	{
		ft_putchar('*');
		counter++;
	}
	if (number_char > 1)
	{
		ft_putchar('/');
	}
	ft_putchar(10);
}

void	rush01(int width, int height)
{
	int	count;

	if (height != 0 && width != 0)
	{
		count = 2;
		ligne_type_0_1(width);
		while (count < height)
		{
			ligne_type_1_1(width);
			count++;
		}
		if (height != 1)
		{
			ligne_type_3_1(width);
		}
	}
}

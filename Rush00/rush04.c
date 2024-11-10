/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anbarthe <anbarthe@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 22:18:46 by anbarthe          #+#    #+#             */
/*   Updated: 2024/07/21 09:27:28 by evdalmas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ligne_type_0_4(int number_char)
{
	int	counter;

	ft_putchar('A');
	counter = 2;
	while (counter < number_char)
	{
		ft_putchar('B');
		counter++;
	}
	if (number_char > 1)
	{
		ft_putchar('C');
	}
	ft_putchar(10);
}

void	ligne_type_1_4(int number_char)
{
	int	counter;

	ft_putchar('B');
	counter = 2;
	while (counter < number_char)
	{
		ft_putchar(' ');
		counter++;
	}
	if (number_char > 1)
	{
		ft_putchar('B');
	}
	ft_putchar(10);
}

void	ligne_type_3_4(int number_char)
{
	int	counter;

	ft_putchar('C');
	counter = 2;
	while (counter < number_char)
	{
		ft_putchar('B');
		counter++;
	}
	if (number_char > 1)
	{
		ft_putchar('A');
	}
	ft_putchar(10);
}

void	rush04(int width, int height)
{
	int	count;

	if (height != 0 && width != 0)
	{
		count = 2;
		ligne_type_0_4(width);
		while (count < height)
		{
			ligne_type_1_4(width);
			count++;
		}
		if (height != 1)
		{
			ligne_type_3_4(width);
		}
	}
}

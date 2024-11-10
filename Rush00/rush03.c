/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anbarthe <anbarthe@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 21:58:29 by anbarthe          #+#    #+#             */
/*   Updated: 2024/07/21 09:27:12 by evdalmas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ligne_type_0_3(int number_char)
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

void	ligne_type_1_3(int number_char)
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

void	rush03(int width, int height)
{
	int	count;

	if (height != 0 && width != 0)
	{
		count = 2;
		ligne_type_0_3(width);
		while (count < height)
		{
			ligne_type_1_3(width);
			count++;
		}
		if (height != 1)
		{
			ligne_type_0_3(width);
		}
	}
}

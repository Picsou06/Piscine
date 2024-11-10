/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anbarthe <anbarthe@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 20:02:02 by anbarthe          #+#    #+#             */
/*   Updated: 2024/07/21 09:26:09 by evdalmas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ligne_type_0_0(int number_char)
{
	int	counter;

	ft_putchar('o');
	counter = 2;
	while (counter < number_char)
	{
		ft_putchar('-');
		counter++;
	}
	if (number_char > 1)
	{
		ft_putchar('o');
	}
	ft_putchar(10);
}

void	ligne_type_1_0(int number_char)
{
	int	counter;

	ft_putchar('|');
	counter = 2;
	while (counter < number_char)
	{
		ft_putchar(' ');
		counter++;
	}
	if (number_char > 1)
	{
		ft_putchar('|');
	}
	ft_putchar(10);
}

void	rush(int width, int height)
{
	int	count;

	if (height != 0 && width != 0)
	{
		count = 2 ;
		ligne_type_0_0(width);
		while (count < height)
		{
			ligne_type_1_0(width);
			count++;
		}
		if (height != 1)
		{
			ligne_type_0_0(width);
		}
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evdalmas <evdalmas@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 19:29:18 by evdalmas          #+#    #+#             */
/*   Updated: 2024/07/18 13:28:20 by evdalmas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
/*
int main(void)
{
	int*	a;
	int*	b;
	int	c;
	int	d;

	c = 5;
	d = 8;
	a = &c;
	b = &d;
	ft_swap(a,b);
	printf("%d", *a);
	printf("%d", *b);
}*/

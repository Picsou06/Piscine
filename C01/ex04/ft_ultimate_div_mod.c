/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evdalmas <evdalmas@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 19:29:18 by evdalmas          #+#    #+#             */
/*   Updated: 2024/07/18 22:24:16 by evdalmas         ###   ########.fr       */
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

void	ft_div_mod(int *a, int *b, int *div, int *mod)
{
	*div = *a / *b;
	*mod = *a % *b;
	ft_swap(a, div);
	ft_swap(b, mod);
}

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	*c;
	int	*d;
	int	e;
	int	f;

	c = &e;
	d = &f;
	ft_div_mod(a, b, c, d);
}
/*
int main()
{
    int a = 42;
    int b = 10;

    printf("Avant ft_ultimate_div_mod :\n");
    printf("a = %d, b = %d\n", a, b);

    ft_ultimate_div_mod(&a, &b);

    printf("Après ft_ultimate_div_mod :\n");
    printf("a (quotient) = %d, b (reste) = %d\n", a, b);

    return 0;
}*/

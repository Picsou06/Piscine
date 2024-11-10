/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evdalmas <evdalmas@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 19:29:18 by evdalmas          #+#    #+#             */
/*   Updated: 2024/07/18 18:06:15 by evdalmas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int main()
{
    int a = 42;
    int b = 10;
    int div, mod;

    ft_div_mod(a, b, &div, &mod);

    printf("a = %d, b = %d\n", a, b);
    printf("Division: %d\n", div);
    printf("Modulo: %d\n", mod);

    return 0;
}*/

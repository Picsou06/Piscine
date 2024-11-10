/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evdalmas <evdalmas@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 09:40:07 by evdalmas          #+#    #+#             */
/*   Updated: 2024/07/28 17:02:32 by evdalmas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_fibonacci(int index)
{
	int	answer;

	answer = 1;
	if (index < 0)
		return (-1);
	if (index <= 1)
		return (index);
	else
		answer = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
	return (answer);
}

int	main(void)
{
	printf("Fibonnaci de 5 %d \n", ft_fibonacci(5));
	printf("Fibonnaci de -1 %d \n", ft_fibonacci(-1));
	printf("Fibonnaci de 0 %d \n", ft_fibonacci(0));
	printf("Fibonnaci de 30 %d \n", ft_fibonacci(30));
}

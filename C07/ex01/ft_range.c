/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evdalmas <evdalmas@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 19:28:47 by evdalmas          #+#    #+#             */
/*   Updated: 2024/07/31 12:05:56 by evdalmas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	compteur;
	int	*answer;

	compteur = 0;
	if (min >= max)
	{
		answer = NULL;
		return (answer);
	}
	answer = (int *) malloc(sizeof(int) * (max - min));
	while (compteur <= max - min)
	{
		answer[compteur] = min + compteur;
		compteur++;
	}
	return (answer);
}
/*
int main(void)
{
    int min = 5;
    int max = 500;
    int *range;
    int i;

    range = ft_range(min, max);
    if (range == NULL)
    {
        printf("ft_range returned NULL\n");
        return 1;
    }

    for (i = 0; i < max - min; i++)
    {
        printf("%d ", range[i]);
    }
    printf("\n");

    free(range);
    return 0;
}*/

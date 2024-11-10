/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evdalmas <evdalmas@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 19:28:47 by evdalmas          #+#    #+#             */
/*   Updated: 2024/07/31 12:32:42 by evdalmas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*tab;
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	tab = (int *)malloc(sizeof(int) * (max - min));
	i = 0;
	while (min != max)
	{
		tab[i] = min;
		i++;
		min++;
	}
	*range = tab;
	return (i);
}
/*
int main(void)
{
    int *range;
    int i;
    int	size;

    // Test 1: min < max
    size = ft_ultimate_range(&range, 5, 500);
    printf("Test 1 (5 to 500):\n");
    printf("Size returned: %d\n", size);
    if (size > 0)
    {
        printf("Values: ");
        for (i = 0; i < size; i++)
            printf("%d ", range[i]);
        printf("\n");
        free(range);
    }
    else if (size == 0)
        printf("Range is NULL\n");
    else
        printf("Error occurred\n");

    // Test 2: min == max
    size = ft_ultimate_range(&range, 7, 7);
    printf("\nTest 2 (7 to 7):\n");
    printf("Size returned: %d\n", size);
    if (size == 0)
        printf("Range is NULL (as expected)\n");

    // Test 3: min > max
    size = ft_ultimate_range(&range, 10, 5);
    printf("\nTest 3 (10 to 5):\n");
    printf("Size returned: %d\n", size);
    if (size == 0)
        printf("Range is NULL (as expected)\n");

    // Test 4: negative numbers
    size = ft_ultimate_range(&range, -3, 3);
    printf("\nTest 4 (-3 to 3):\n");
    printf("Size returned: %d\n", size);
    if (size > 0)
    {
        printf("Values: ");
        for (i = 0; i < size; i++)
            printf("%d ", range[i]);
        printf("\n");
        free(range);
    }
    else if (size == 0)
        printf("Range is NULL\n");
    else
        printf("Error occurred\n");

    return 0;
}*/

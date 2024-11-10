/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evdalmas <evdalmas@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 12:08:22 by evdalmas          #+#    #+#             */
/*   Updated: 2024/07/21 12:18:43 by evdalmas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	res;

	i = 0;
	j = 0;
	res = 0;
	while (dest[i] != '\0')
		i++;
	while (src[res] != '\0')
		res++;
	if (size <= i)
		res += size;
	else
		res += i;
	while (src[j] != '\0' && (i + 1) < size)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (res);
}
/*
int main()
{
    char dest1[20] = "Hello ";
    char src[] = "World!";
    unsigned int size = sizeof(dest1);
    unsigned int result1;

    printf("Test 1:\n");
    printf("Before ft_strlcat: dest = \"%s\", src = \"%s\"\n", dest1, src);
    result1 = ft_strlcat(dest1, src, size);
    printf("After ft_strlcat:  dest = \"%s\", result = %u\n\n", dest1, result1);
}
*/

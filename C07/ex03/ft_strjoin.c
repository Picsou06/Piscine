/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evdalmas <evdalmas@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 12:19:49 by evdalmas          #+#    #+#             */
/*   Updated: 2024/07/31 12:29:36 by evdalmas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count])
	{
		count++;
	}
	return (count);
}

int	get_len(int size, char **strs, char *sep)
{
	int	answer;
	int	i;

	answer = 0;
	i = 0;
	while (i < size)
	{
		answer = answer + ft_strlen(strs[i]);
		i++;
	}
	answer = answer + ft_strlen(sep) * (size - 1);
	return (answer);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*c;
	int		i;

	if (size == 0)
	{
		c = malloc(sizeof(char));
		if (c == NULL)
			return (NULL);
		c[0] = '\0';
		return (c);
	}
	c = malloc(sizeof(char) * (get_len(size, strs, sep) + 1));
	if (c == NULL)
		return (NULL);
	c[0] = '\0';
	i = 0;
	while (i < size)
	{
		ft_strcat(c, strs[i]);
		if (i < size - 1)
			ft_strcat(c, sep);
		i++;
	}
	return (c);
}

/*
int main()
{
    char *strs1[] = {"Hello", "world", "of", "C"};
    char *sep1 = " ";
    int size1 = 4;

    char *result1 = ft_strjoin(size1, strs1, sep1);
    printf("Test 1 result: %s\n", result1);
    free(result1);

    // Test 2 : Cas avec un séparateur différent
    char *strs2[] = {"Apple", "Banana", "Cherry"};
    char *sep2 = ",";
    int size2 = 3;

    char *result2 = ft_strjoin(size2, strs2, sep2);
    printf("Test 2 result: %s\n", result2);
    free(result2);

    // Test 3 : Cas avec une taille de 0
    char *strs3[] = {};
    char *sep3 = "-";
    int size3 = 0;

    char *result3 = ft_strjoin(size3, strs3, sep3);
    printf("Test 3 result: %s\n", result3);
    free(result3);

    // Test 4 : Cas avec une seule chaîne
    char *strs4[] = {"SingleString"};
    char *sep4 = "+";
    int size4 = 1;

    char *result4 = ft_strjoin(size4, strs4, sep4);
    printf("Test 4 result: %s\n", result4);
    free(result4);

    return 0;
}*/

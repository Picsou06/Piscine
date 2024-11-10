/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evdalmas <evdalmas@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 01:34:06 by evdalmas          #+#    #+#             */
/*   Updated: 2024/07/21 12:24:03 by evdalmas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

int	is_match(char *str, char *to_find)
{
	while (*to_find && *str && *to_find == *str)
	{
		to_find++;
		str++;
	}
	return (*to_find == '\0');
}

char	*ft_strstr(char *str, char *to_find)
{
	char	*answer;

	if (*to_find == '\0')
	{
		return (str);
	}
	while (*str)
	{
		if (*str == *to_find)
		{
			answer = str;
			if (is_match(str, to_find))
			{
				return (answer);
			}
		}
		str++;
	}
	return (NULL);
}
/*
int main() {
    char str[] = "";
    char to_find[] = "simple";
    char to_find_not[] = "complex";

    printf("ft_strstr: Substring found: %s\n", ft_strstr(str, to_find));
    printf("strstr: Substring found: %s\n", strstr(str, to_find));
    printf("ft_strstr: Substring found: %s\n", ft_strstr(str, to_find_not));
    printf("strstr: Substring found: %s\n", strstr(str, to_find_not));

    return 0;
}*/

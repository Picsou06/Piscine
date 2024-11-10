/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evdalmas <evdalmas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 22:41:11 by evdalmas          #+#    #+#             */
/*   Updated: 2024/08/07 23:09:00 by evdalmas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BSQ.h"

int	ft_strcmp(char *s1, char *s2, char *s3)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s3[i] && s1[i] == s2[i] && s1[i] == s3[i])
	{
		i++;
	}
	if (s1[i] != s2[i])
		return ((unsigned char)s1[i] - (unsigned char)s2[i]);
	return ((unsigned char)s1[i] - (unsigned char)s3[i]);
}

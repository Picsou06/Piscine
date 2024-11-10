/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evdalmas <evdalmas@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 17:11:47 by evdalmas          #+#    #+#             */
/*   Updated: 2024/07/22 19:03:07 by evdalmas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	char	*name;
	int		i;

	i = 1;
	while (i < argc)
	{
		name = argv[i];
		while (*name != '\0')
		{
			write(1, name, 1);
			name++;
		}
		write(1, "\n", 1);
		i++;
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anbarthe <anbarthe@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 20:15:03 by anbarthe          #+#    #+#             */
/*   Updated: 2024/07/21 09:25:52 by evdalmas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	rush(int width, int height);

void	rush01(int width, int height);

void	rush02(int width, int height);

void	rush03(int width, int height);

void	rush04(int width, int height);

int	getnb(char *size)
{
	int	answer;
	int	i;

	answer = 0;
	i = 0;
	while (size[i] != '\0')
	{
		if (size[i] >= '0' && size[i] <= '9')
		{
			answer = answer * 10 + (size[i] - 48);
			i++;
		}
		else
		{
			return (-1);
		}
	}
	return (answer);
}

void	callrush(char rushnb, int width, int height)
{
	if (rushnb == '0')
	{
		rush(width, height);
	}
	else if (rushnb == '1')
	{
		rush01(width, height);
	}
	else if (rushnb == '2')
	{
		rush02(width, height);
	}
	else if (rushnb == '3')
	{
		rush03(width, height);
	}
	else
	{
		rush04(width, height);
	}
}

int	main(int argc, char *argv[])
{
	char	rushnb;
	int		width;
	int		height;

	if (argc == 3 || argc == 4)
	{
		rushnb = '0';
		if (argc == 4)
		{
			rushnb = *argv[3];
		}
		width = getnb(argv[1]);
		height = getnb(argv[2]);
		if (height < 0 || width < 0 || rushnb < '0' || rushnb > '4')
		{
			write(1, "Les arguments ne sont pas valides", 34);
			return (0);
		}
		callrush(rushnb, width, height);
	}
	else
	{
		write(1, "2 arguments sont attendu: width, height", 39);
	}
}

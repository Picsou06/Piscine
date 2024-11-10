/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evdalmas <evdalmas@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 15:10:48 by evdalmas          #+#    #+#             */
/*   Updated: 2024/07/21 15:29:08 by evdalmas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_erreur(char *base, int *erreur)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (base[0] == '\0' || base[1] == '\0')
		*erreur = 1;
	while (base[i] && *erreur == 0)
	{
		j = i;
		while (base[j] != '\0')
		{
			j++;
			if (base[i] == base[j])
				*erreur = 1;
		}
		if (base[i] == '+' || base[i] == '-' || base[i] == '%')
			*erreur = 1;
		if (base[i] == '*' || base[i] == '=' || base[i] == ',')
			*erreur = 1;
		if (base[i] < 33 || base[i] > 126 || base[i] == '/' || base[i] == '.')
			*erreur = 1;
		else
			i++;
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		lbase;
	int		erreur;
	long	nb;

	lbase = 0;
	erreur = 0;
	ft_erreur(base, &erreur);
	nb = nbr;
	if (erreur == 0)
	{
		if (nb < 0)
		{
			ft_putchar('-');
			nb *= -1;
		}
		while (base[lbase])
			lbase++;
		if (nb < lbase)
			ft_putchar(base[nb]);
		if (nb >= lbase)
		{
			ft_putnbr_base(nb / lbase, base);
			ft_putnbr_base(nb % lbase, base);
		}
	}
}
/*
int main()
{
    // Définir quelques bases pour les tests
    char *base_bin = "01";       // Base binaire
    char *base_oct = "01234567"; // Base octale
    char *base_dec = "0123456789"; // Base décimale
    char *base_hex = "0123456789ABCDEF"; // Base hexadécimale

    // Tester avec différents nombres
    printf("Base binaire:\n");
    ft_putnbr_base(42, base_bin); // 42 en binaire
    ft_putchar('\n');

    printf("Base octale:\n");
    ft_putnbr_base(42, base_oct); // 42 en octal
    ft_putchar('\n');

    printf("Base décimale:\n");
    ft_putnbr_base(42, base_dec); // 42 en décimal
    ft_putchar('\n');

    printf("Base hexadécimale:\n");
    ft_putnbr_base(42, base_hex); // 42 en hexadécimal
    ft_putchar('\n');

    // Tester un nombre négatif
    printf("Nombre négatif en base décimale:\n");
    ft_putnbr_base(-42, base_dec); // -42 en décimal
    ft_putchar('\n');

    // Tester des erreurs
    printf("Test avec une base invalide (vide):\n");
    ft_putnbr_base(42, ""); // Base vide
    ft_putchar('\n');

    printf("Test avec une base invalide (trop courte):\n");
    ft_putnbr_base(42, "1"); // Base trop courte
    ft_putchar('\n');

    return 0;
}*/

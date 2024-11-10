/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evdalmas <evdalmas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 14:05:46 by evdalmas          #+#    #+#             */
/*   Updated: 2024/08/07 23:34:52 by evdalmas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BSQ.h"

void	process_file(char *filename)
{
	char	**info;
	char	**morph;
	int		**occurence;
	char	**answer;
	int		max;

	info = extern_get_information(filename);
	morph = morph_tab(read_file_to_array(filename), info);
	answer = modifyarray(morph, info);
	max = get_max_table(answer, info);
	occurence = find_occurrence(answer, max, info);
	morph = read_file_to_array(filename);
	answer = transform_table(morph, occurence, max, info);
	print_tab(answer, info);
}

int	main(int argc, char *argv[])
{
	int	i;

	if (argc == 1)
	{
		userInputToFile();
		if (!check_tab("qwertyuiopasdfghjkl.txt"))
			process_file("qwertyuiopasdfghjkl.txt");
		return (0);
	}
	i = 1;
	while (i < argc)
	{
		if (!check_tab(argv[i++]))
			process_file(argv[i - 1]);
	}
	return (0);
}

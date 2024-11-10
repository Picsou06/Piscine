/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evdalmas <evdalmas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 23:27:36 by evdalmas          #+#    #+#             */
/*   Updated: 2024/08/07 23:36:45 by evdalmas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BSQ.h"

void userInputToFile()
{
	char input[1000];
	
	int file = open("qwertyuiopasdfghjkl.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (file == -1) {
		write(2, "map error\n", 11);
		return;
	}

	ssize_t bytesRead = read(0, input, sizeof(input));
	write(file, input, bytesRead);
	write(file, "\n", 1); // Add a newline character
	close(file);
}
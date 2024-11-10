/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BSQ.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evdalmas <evdalmas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 16:32:03 by evdalmas          #+#    #+#             */
/*   Updated: 2024/08/07 23:31:59 by evdalmas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

void	print_tab(char **tab, char **tab_type);
char	**get_information(char *start);
char	**morph_tab(char **tab, char **tab_type);
char	**read_file_to_array(const char *filename);
char	**extern_get_information(char *filename);
int		ft_atoi(char *str);
int		count_lines(char *start);
int		count_char_by_line(char *start);
int		check_tab(char *filename);
int		count_char_by_line2(char *start);
char	**allocate_array(void);
char	*allocate_line(void);
char	*allocate_buffer(void);
char	**modifyarray(char **array, char **tab_type);
int		get_max_table(char **table, char **tab_type);
int		**find_occurrence(char **arr, int nb, char **tab_type);
char	**transform_table(char **table, int **pos, int max, char **tab_type);
int		ft_strcmp(char *s1, char *s2, char *s3);
int		check_char_count(char *buffer, int rows, int cols);
int		realy_count_char_by_line2(char *start);
char	**allocate_and_initialize_answer(char *start, int len);
int		remaining_validation(char **info, char *buffer);
int		initial_validation(char **info, char *buffer);
int		check_value(char *start, char **info);
void	userInputToFile();
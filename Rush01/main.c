/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: jkoers <jkoers@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/19 15:41:04 by jkoers        #+#    #+#                 */
/*   Updated: 2020/07/19 17:31:02 by jkoers        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// 4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2

#include <stdlib.h>
#include <stdio.h>

char	g_disp[24][6];
char	**get_column_clues(char *input);
char	**get_row_clues(char *input);

int		main(int argc, char **argv)
{
	char **row_clues;
	char **column_clues;

	if (argc != 2)
		return (1);
	row_clues = get_row_clues(argv[1]);
	column_clues = get_column_clues(argv[1]);
	compare(row_clues, column_clues);

	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: jkoers <jkoers@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/27 15:06:10 by jkoers        #+#    #+#                 */
/*   Updated: 2020/07/28 11:19:06 by jkoers        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdio.h>
#include "canvas.h"
#include "fit_squares.h"
#include "load_map.h"
#include "matrix_memory.h"

int		main(int argc, char **argv)
{
	char	*filename = NULL;
	if (argc == 1)
	{
		filename = "maps/example_file";
	}
	else
	{
		filename = argv[1];
	}

	t_workplace wp;
	prepare_workplace(&wp, filename);
	printf("empty    <%c>\n", wp.empty);
	printf("obstacle <%c>\n", wp.obstacle);
	printf("full     <%c>\n", wp.full);
	printf("x_size    %d\n", wp.x_size);
	printf("y_size    %d\n", wp.y_size);
	// write_matrix(1, wp.map, wp.x_size, wp.y_size);
	if (found_biggest_square(&wp))
	{
		printf("\n");
		write_matrix(1, wp.canvas, wp.x_size, wp.y_size);
	}
	else
	{
		printf("not found\n");
	}
	return (0);
}

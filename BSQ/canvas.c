/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   canvas.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: joppe <joppe@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/27 23:43:06 by joppe         #+#    #+#                 */
/*   Updated: 2020/08/04 12:26:55 by joppe         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "canvas.h"
#include "load_map.h"
#include "helpers/ft_file.h"
#include "helpers/ft_matrix.h"
#include "helpers/ft_str.h"
#include "fit_squares.h"

// #include <stdio.h>
// void	print_wp(t_wp *wp)
// {
// 	// remove this
// 	printf("empty    <%c>\n", wp.empty);
// 	printf("obstacle <%c>\n", wp.obstacle);
// 	printf("full     <%c>\n", wp.full);
// 	printf("x_size    %d \n", wp.x_size);
// 	printf("y_size    %d \n", wp.y_size);
// }

void	dealloc_workplace(t_wp *wp)
{
	if (wp->map_file)
		free(wp->map_file);
	if (wp->map)
		free(wp->map);
}

int		is_valid_workplace(char *filename, t_wp *wp)
{
	uint8_t	error;

	wp->map_file = ft_read_file(filename);
	error = 0;
	if (wp->map_file == NULL)
	{
		ft_putstr("map file error\n");
		error = 1;
	}
	if (!error && !is_valid_legend(wp))
	{
		ft_putstr("legend error\n");
		error = 1;
	}
	if (!error && !is_valid_x_size(wp))
	{
		ft_putstr("x_size error\n");
		error = 1;
	}
	if (!error && !is_valid_y_size(wp))
	{
		ft_putstr("y_size error\n");
		error = 1;
	}
	if (!error && !is_valid_map(wp))
	{
		ft_putstr("map error\n");
		error = 1;
	}
	if (!error && !found_biggest_square(wp))
	{
		ft_putstr("no square found\n");
		error = 1;
	}
	// if (!error)
	// {
	// 	write_matrix(1, wp->map, wp->x_size, wp->y_size);
	// }
	// dealloc_workplace(wp);
	return (1);
}

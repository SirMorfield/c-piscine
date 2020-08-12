/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   canvas.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: joppe <joppe@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/27 23:43:06 by joppe         #+#    #+#                 */
/*   Updated: 2020/08/13 01:05:09 by joppe         ########   odam.nl         */
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

void	dealloc_workplace(t_wp *wp)
{
	if (wp->map_file)
		free(wp->map_file);
	if (wp->map)
		free(wp->map);
}

int		is_valid_workplace(char *filename, t_wp *wp)
{
	wp->map_file = ft_read_file(filename);
	if (wp->map_file == NULL)
	{
		ft_putstr("map file error\n");
		return (0);
	}
	if (!is_valid_legend(wp))
	{
		ft_putstr("legend error\n");
		return (0);
	}
	if (!is_valid_x_size(wp))
	{
		ft_putstr("x_size error\n");
		return (0);
	}
	if (!is_valid_y_size(wp))
	{
		ft_putstr("y_size error\n");
		return (0);
	}
	if (!is_valid_map(wp))
	{
		ft_putstr("map error\n");
		return (0);
	}
	if (!found_biggest_square(wp))
	{
		ft_putstr("no square found\n");
		return (0);
	}
	return (1);
}

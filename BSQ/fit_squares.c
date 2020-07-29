/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   fit_squares.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: joppe <joppe@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/27 23:02:06 by joppe         #+#    #+#                 */
/*   Updated: 2020/07/29 13:27:04 by jkoers        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#define u_int unsigned int
#include <stdio.h>
#include "canvas.h"
#include "matrix_memory.h"

void	set_square(t_workplace *wp, u_int x, u_int y, u_int size)
{
	unsigned int x_i;
	unsigned int y_i;
	// wp->biggest_square_x = x;
	// wp->biggest_square_y = y;
	// wp->biggest_square_size = size;
	// printf("x %u\n",x);
	// printf("y %u\n",y);
	// printf("s %u\n",size);
	y_i = 0;
	while (y_i < size)
	{
		x_i = 0;
		while (x_i < size)
		{
			wp->canvas[y_i + y][x_i + x] = wp->full;
			x_i++;
		}
		y_i++;
	}
}

int		is_valid_square(t_workplace *wp, u_int x, u_int y, u_int size)
{
	unsigned int x_i;
	unsigned int y_i;

	y_i = 0;
	while (y_i < size)
	{
		x_i = 0;
		while (x_i < size)
		{
			// printf("<%c>\n", wp->map[y_i + y][x_i + x]);
			if (wp->map[y_i + y][x_i + x] == wp->obstacle)
				return (0);
			x_i++;
		}
		y_i++;
	}
	return (1);
}

int		contains_valid_location(t_workplace *wp, unsigned int size)
{
	unsigned int x;
	unsigned int y;

	x = 0;
	while (x <= (wp->x_size - size))
	{
		y = 0;
		while (y <= (wp->y_size - size))
		{
			if (is_valid_square(wp, x, y, size))
			{
				set_square(wp, x, y, size);
				return (1);
			}
			y++;
		}
		x++;
	}
	return (0);
}

int		found_biggest_square(t_workplace *wp)
{
	unsigned int size;

	size = wp->x_size < wp->y_size ? wp->x_size : wp->y_size;
	while (size > 0)
	{
		if (contains_valid_location(wp, size))
			return (1);
		size--;
	}
	return (0);
}

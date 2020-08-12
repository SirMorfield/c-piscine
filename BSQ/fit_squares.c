/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   fit_squares.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: joppe <joppe@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/27 23:02:06 by joppe         #+#    #+#                 */
/*   Updated: 2020/08/13 01:08:15 by joppe         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "canvas.h"
#include "get_max_square_size.h"
#include "helpers/ft_matrix.h"
#include "helpers/ft_str.h"
#include "get_max_square_size.h"

void	set_square(t_wp *wp, uint64_t x, uint64_t y, uint64_t size)
{
	uint64_t x_i;
	uint64_t y_i;
	printf(">x %lu\n", x);
	printf(">y %lu\n", y);
	printf(">s %lu\n", size);
	y_i = 0;
	while (y_i < size)
	{
		x_i = 0;
		while (x_i < size)
		{
			wp->map[y_i + y][x_i + x] = wp->full;
			x_i++;
		}
		y_i++;
	}
}

int		is_valid_square(t_wp *wp, uint64_t *x, uint64_t *y, uint64_t size)
{
	int64_t x_cpy;
	int64_t y_cpy;
	int64_t max_x;
	int64_t max_y;

	y_cpy = *y;
	x_cpy = *x;
	max_y = *y + size;
	while (y_cpy < max_y)
	{
		max_x = (*x + size) - 1;
		while (max_x >= x_cpy)
		{
			// printf("max_x %lu\n", max_x);
			// printf("<%c>\n", wp->map[y_i + y][x_i + x]);
			if (wp->map[y_cpy][max_x] == wp->obstacle)
			{
				*x = max_x;
				return (0);
			}
			max_x--;
		}
		y_cpy++;
	}
	return (1);
}

int		contains_valid_location(t_wp *wp, uint64_t size)
{
	uint64_t x;
	uint64_t y;

	y = 0;
	while (y <= (wp->y_size - size))
	{
		x = 0;
		while (x <= (wp->x_size - size))
		{
			if (is_valid_square(wp, &x, &y, size))
			{
				set_square(wp, x, y, size);
				return (1);
			}
			x++;
		}
		y++;
	}
	return (0);
}

int		found_biggest_square(t_wp *wp)
{
	uint64_t size;

	size = get_max_square_size(wp);
	// size = wp->x_size < wp->y_size ? wp->x_size : wp->y_size;
	while (size >= 1)
	{
		if (contains_valid_location(wp, size))
			return (1);
		size--;
	}
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   get_max_square_size.c                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: joppe <joppe@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/12 16:19:00 by joppe         #+#    #+#                 */
/*   Updated: 2020/08/12 16:41:45 by joppe         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "get_max_square_size.h"

uint64_t get_max_square_size(t_wp *wp, uint64_t *square_y)
{
	uint64_t	x;
	uint64_t	y;
	uint64_t	prev_obstacle_i;
	uint64_t	max_size;
	uint64_t	size;

	prev_obstacle_i = 0;
	max_size = 0;
	y = 0;
	while (y < wp->y_size)
	{
		x = 0;
		while (x < wp->x_size)
		{
			if (wp->map[y][x] == wp->obstacle)
			{
				size = x - prev_obstacle_i;
				if (size > max_size)
				{
					*square_y = y;
					max_size = size;
				}
				prev_obstacle_i = x;
			}
			x++;
		}
		y++;
	}
	return (max_size);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   obstacle.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: joppe <joppe@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/27 22:37:44 by joppe         #+#    #+#                 */
/*   Updated: 2020/07/27 23:07:16 by joppe         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "canvas.h"

void	apply_obstacle_locations(t_workplace *wp)
{
	unsigned int x;
	unsigned int y;
	unsigned int i;

	i = 0;
	while (y < wp->y_size)
	{
		while (x < wp->x_size)
		{
			if (wp->canvas[y][x] == wp->obstacle)
			{
				wp->obstacle_x_locations[i] = x;
				wp->obstacle_y_locations[i] = y;
				i++;
			}
			x++
		}
		y++;
	}
}

void 	set_obstacle_locations(t_workplace *wp)
{
	unsigned int x;
	unsigned int y;

	wp->n_obstacles = 0;
	while (y < wp->y_size)
	{
		while (x < wp->x_size)
		{
			if (wp->canvas[y][x] == wp->obstacle)
				wp->n_obstacles += 1;
		}
	}
	wp->obstacle_x_locations = malloc(wp->n_obstacles * sizeof(unsigned int));
	wp->obstacle_y_locations = malloc(wp->n_obstacles * sizeof(unsigned int));
	apply_obstacle_locations(wp);
}

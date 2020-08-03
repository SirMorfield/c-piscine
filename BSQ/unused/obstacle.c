/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   obstacle.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: joppe <joppe@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/27 22:37:44 by joppe         #+#    #+#                 */
/*   Updated: 2020/07/28 22:46:27 by joppe         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "canvas.h"
#include <stdlib.h>
#include <stdio.h>

uint16_t	n_occurrences(char *str, uint16_t strlen, char c)
{
	uint16_t occurrences;

	occurrences = 0;
	while (strlen > 0)
	{
		strlen--;
		if(str[strlen] == c)
			occurrences++;
	}
	return (occurrences);
}

void		set_obstacle_locations(t_wp *wp)
{
	uint16_t x;
	uint16_t y;
	uint16_t occurrences_i;
	uint16_t occurrences;

	wp->obstacles = malloc(wp->y_size * sizeof(int16_t*));
	y = 0;
	while (y < wp->y_size)
	{
		occurrences = n_occurrences(wp->map[y], wp->x_size, wp->obstacle);
		wp->obstacles[y] = malloc((occurrences + 1) * sizeof(int16_t));
		wp->obstacles[y][occurrences] = -1;
		occurrences_i = 0;
		x = 0;
		// printf(">");
		while (x < wp->x_size)
		{
			if (wp->map[y][x] == wp->obstacle)
			{
				wp->obstacles[y][occurrences_i] = (int16_t)x;
				// printf("%u ", x);
				occurrences_i++;
			}
			x++;
		}
		// printf("\n");
		y++;
	}
}

int			is_valid_square2(t_wp *wp, uint16_t x, uint16_t y, uint16_t size)
{
	uint16_t max_x;
	uint16_t max_y;
	uint16_t y_i;
	uint16_t i;

	max_x = (x + size) - 1;
	max_y = y + size;
	y_i = y;
	while (y_i < max_y)
	{
		i = 0;
		while (wp->obstacles[y_i][i] != -1)
		{
			if (wp->obstacles[y_i][i] > max_x)
				break ;
			if (wp->obstacles[y_i][i] >= x)
				return (0);
			i++;
		}
		y_i++;
	}
	return (1);
}

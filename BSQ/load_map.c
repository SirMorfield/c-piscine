/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   load_map.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: jkoers <jkoers@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/24 15:27:09 by jkoers        #+#    #+#                 */
/*   Updated: 2020/07/27 21:12:40 by joppe         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include "load_map.h"
#include "helpers/ft_matrix.h"
#include "helpers/ft_str.h"
#include "helpers/ft_int.h"

int	is_valid_legend(t_wp *wp)
{
	uint64_t	i;
	char		buf[4];

	i = 0;
	while (wp->map_file[i] != '\n')
		i++;
	if (i <= 3 || wp->map_file[i + 1] == '\n')
		return (0);
	buf[0] = wp->map_file[i - 3];
	buf[1] = wp->map_file[i - 2];
	buf[2] = wp->map_file[i - 1];
	buf[3] = '\0';
	if (ft_contains_duplicates(buf))
		return (0);
	wp->empty = buf[0];
	wp->obstacle = buf[1];
	wp->full = buf[2];
	return (1);
}

int	is_valid_x_size(t_wp *wp)
{
	int				start;
	unsigned int	i;
	unsigned int	size;

	i = 0;
	start = -1;
	while (1)
	{
		if (wp->map_file[i] == '\n')
		{
			if (start == -1)
				start = i;
			else
				break ;
		}
		i++;
	}
	size = (i - start) - 1;
	if (size == 0)
		return (0);
	wp->x_size = size;
	return (1);
}

int	is_valid_y_size(t_wp *wp)
{
	uint64_t			i;
	int					y_size;
	const unsigned int	buf_size = 20;
	char				buf[buf_size + 1];

	i = 0;
	while (ft_is_digit(wp->map_file[i]) && i < buf_size)
	{
		buf[i] = wp->map_file[i];
		i++;
	}
	if (i == 0 || i == buf_size - 1)
		return (0);
	buf[i] = '\0';
	y_size = ft_atoi(buf);
	if (y_size <= 0)
		return (0);
	wp->y_size = (uint64_t)y_size;
	return (1);
}

int is_valid_map(t_wp *wp)
{
	uint64_t	map_i;
	uint64_t	matrix_y;

	wp->map = malloc(wp->y_size * sizeof(char*));
	map_i = 0;
	while (wp->map_file[map_i] != '\n')
		map_i++;
	map_i += 1;
	while (matrix_y < wp->y_size)
	{
		wp->map[matrix_y] = wp->map_file + map_i;
		map_i += wp->x_size + 1;
		matrix_y++;
	}
	return (1);
}

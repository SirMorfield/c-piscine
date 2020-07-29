/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   canvas.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: joppe <joppe@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/27 23:43:06 by joppe         #+#    #+#                 */
/*   Updated: 2020/07/29 13:47:42 by jkoers        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "load_map.h"
#include "canvas.h"

void			prepare_workplace(t_workplace *wp, char *filename)
{
	get_legend(filename, &(wp->empty), &(wp->obstacle), &(wp->full));
	get_size(filename, &(wp->x_size), &(wp->y_size));
	wp->map = load_map(filename);
	wp->canvas = load_map(filename);
}

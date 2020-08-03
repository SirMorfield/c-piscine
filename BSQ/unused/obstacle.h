/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   obstacle.h                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: joppe <joppe@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/27 22:49:23 by joppe         #+#    #+#                 */
/*   Updated: 2020/07/28 22:20:52 by joppe         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef OBSTACLE_H
# define OBSTACLE_H
# include "canvas.h"
# include <stdint-gcc.h>

void	set_obstacle_locations(t_wp *wp);
int		is_valid_square2(t_wp *wp, uint16_t x, uint16_t y, uint16_t size);

#endif
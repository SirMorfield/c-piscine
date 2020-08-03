/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   load_map.h                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: jkoers <jkoers@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/24 16:18:16 by jkoers        #+#    #+#                 */
/*   Updated: 2020/07/27 21:00:00 by joppe         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef GRID_H
# define GRID_H
# include <stdint-gcc.h>
# include "canvas.h"

int	is_valid_legend(t_wp *wp);
int	is_valid_x_size(t_wp *wp);
int	is_valid_y_size(t_wp *wp);
int is_valid_map(t_wp *wp);

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   canvas.h                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: joppe <joppe@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/27 22:58:54 by joppe         #+#    #+#                 */
/*   Updated: 2020/08/03 22:44:11 by joppe         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CANVAS_H
# define CANVAS_H
# include <stdint-gcc.h>

typedef struct		s_workplace
{
	char			*map_file;
	uint64_t		x_size;
	uint64_t		y_size;
	char			empty;
	char			obstacle;
	char			full;
	char			**map;
}					t_wp;
void	dealloc_workplace(t_wp *wp);
int		is_valid_workplace(char *filename, t_wp *wp);

#endif
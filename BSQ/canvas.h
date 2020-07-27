/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   canvas.h                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: joppe <joppe@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/27 22:58:54 by joppe         #+#    #+#                 */
/*   Updated: 2020/07/27 23:56:05 by joppe         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CANVAS_H
# define CANVAS_H

typedef struct		s_workplace
{
	unsigned int		x_size;
	unsigned int		y_size;
	// unsigned int	*obstacle_x_locations;
	// unsigned int	*obstacle_y_locations;
	// int				n_obstacles;
	char				empty;
	char				obstacle;
	char				full;
	char				**map;
	char				**canvas;
	// unsigned int		biggest_square_x;
	// unsigned int		biggest_square_y;
	// unsigned int		biggest_square_size;
}					t_workplace;
void				prepare_workplace(t_workplace *wp, char *filename);


#endif
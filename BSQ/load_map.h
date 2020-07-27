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

void	get_legend(char *filename, char *empty, char *obstacle, char *full);
void	get_size(char *filename, unsigned int *x_size, unsigned int *y_size);
char	**load_map(char *filename);

#endif

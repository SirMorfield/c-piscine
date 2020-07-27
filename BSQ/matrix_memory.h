/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   matrix_memory.h                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: joppe <joppe@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/27 21:00:37 by joppe         #+#    #+#                 */
/*   Updated: 2020/07/28 00:07:48 by joppe         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATRIX_MEMORY_H
# define MATRIX_MEMORY_H

void	free_matrix(void **matrix, unsigned int y_size);
char	**malloc_matrix(unsigned int x_size, unsigned int y_size);
void	write_matrix(int fd, char **grid, unsigned int y_si, unsigned int x_si);


#endif
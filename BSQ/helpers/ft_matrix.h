/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_matrix.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: joppe <joppe@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/27 21:00:37 by joppe         #+#    #+#                 */
/*   Updated: 2020/08/03 21:58:35 by joppe         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_MATRIX_H
# define FT_MATRIX_H
# include <stdint-gcc.h>

void	free_matrix(char **matrix, uint64_t y_size);
char	**malloc_matrix(uint64_t x_size, uint64_t y_size);
void	write_matrix(int fd, char **grid, uint64_t x_size, uint64_t y_size);

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_io.h                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: joppe <joppe@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/03 22:27:29 by joppe         #+#    #+#                 */
/*   Updated: 2020/09/07 01:58:00 by joppe         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_IO_H
# define FT_IO_H
# include "types.h"

void	ft_putstr(char *str);
void	write_str(int32_t fd, char *str);
void	write_matrix(int32_t fd, char **grid, uint64_t x_size, uint64_t y_size);
void	write_uint64_arr(int32_t fd, uint64_t *arr, uint64_t len);
void	write_int64_arr(int32_t fd, int64_t *arr, uint64_t len);

#endif

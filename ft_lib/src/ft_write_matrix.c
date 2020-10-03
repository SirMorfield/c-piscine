/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_write_matrix.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: joppe <joppe@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/28 22:24:08 by joppe         #+#    #+#                 */
/*   Updated: 2020/09/28 22:25:48 by joppe         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "types.h"
#include "ft_io.h"
#include <unistd.h>


void	write_matrix(int32_t fd, char **matrix, uint64_t x_size, uint64_t y_size)
{
	uint64_t y_i;

	y_i = 0;
	while (y_i < y_size)
	{
		write(fd, matrix[y_i], x_size);
		write(fd, "\n", 1);
		y_i++;
	}
}

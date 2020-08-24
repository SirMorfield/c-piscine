/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_io.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: joppe <joppe@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/15 22:48:23 by joppe         #+#    #+#                 */
/*   Updated: 2020/08/23 23:07:24 by joppe         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "types.h"

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
}

void	write_matrix(int fd, char **grid, uint64_t x_size, uint64_t y_size)
{
	uint64_t y_i;

	y_i = 0;
	while (y_i < y_size)
	{
		write(fd, grid[y_i], x_size);
		write(fd, "\n", 1);
		y_i++;
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_matrix.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: joppe <joppe@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/27 21:01:20 by joppe         #+#    #+#                 */
/*   Updated: 2020/08/03 22:58:45 by joppe         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "ft_matrix.h"
#include <stdint-gcc.h>

void	free_matrix(char **matrix, uint64_t y_size)
{
	if (matrix == NULL)
		return ;
	while (y_size > 0)
	{
		y_size--;
		if (matrix[y_size] != NULL)
			free(matrix[y_size]);
	}
	free(matrix);
}

char	**malloc_matrix(uint64_t x_size, uint64_t y_size)
{
	char **result;

	result = malloc(y_size * sizeof(char*));
	while (y_size > 0)
	{
		y_size--;
		result[y_size] = malloc(x_size);
	}
	return (result);
}

void	write_matrix(int fd, char **grid, uint64_t x_size, uint64_t y_size)
{
	uint64_t y_i;

	y_i = 0;
	while (y_i < y_size)
	{
		// write(fd, "<", 1);
		write(fd, grid[y_i], x_size);
		// write(fd, ">", 1);
		write(fd, "\n", 1);
		y_i++;
	}
}

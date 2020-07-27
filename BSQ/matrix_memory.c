/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   matrix_memory.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: joppe <joppe@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/27 21:01:20 by joppe         #+#    #+#                 */
/*   Updated: 2020/07/27 22:37:06 by joppe         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include "matrix_memory.h"

void	free_matrix(void **matrix, unsigned int y_size)
{
	while (y_size > 0)
	{
		y_size--;
	 	free(matrix[y_size]);
	}
	free(matrix);
}

char	**malloc_matrix(unsigned int x_size, unsigned int y_size)
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

void	write_matrix(int fd, char **grid, unsigned int x_si, unsigned int y_si)
{
	unsigned int y_i;

	y_i = 0;
	while (y_i < y_si)
	{
		write(fd, grid[y_i], x_si);
		write(fd, "\n", 1);
		y_i++;
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_alloc_matrix.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: joppe <joppe@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/28 22:29:41 by joppe         #+#    #+#                 */
/*   Updated: 2020/09/28 22:30:15 by joppe         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "types.h"
#include "ft_matrix.h"
#include <stdlib.h>

void	**alloc_matrix(uint64_t x_size, uint64_t y_size)
{
	void **matrix;

	matrix = malloc(y_size);
	while (y_size > 0)
	{
		y_size--;
		matrix[y_size] = malloc(x_size);
	}
	return (matrix);
}

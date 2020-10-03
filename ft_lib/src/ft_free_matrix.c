/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_free_matrix.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: joppe <joppe@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/28 22:30:31 by joppe         #+#    #+#                 */
/*   Updated: 2020/09/28 22:31:10 by joppe         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "types.h"
#include "ft_matrix.h"
#include <stdlib.h>

void	free_matrix(void **matrix, uint64_t y_size)
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

/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_range.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: joppe <joppe@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/20 14:16:49 by joppe         #+#    #+#                 */
/*   Updated: 2020/07/20 14:28:44 by joppe         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *result;
	int offset;

	offset = min;
	if (min >= max)
		return (NULL);
	min -= offset;
	max -= offset;
	result = malloc(max * sizeof(int));
	while (min < max)
	{
		result[min] = min + offset;
		min++;
	}
	return (result);
}

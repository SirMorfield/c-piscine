/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_match_str.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: joppe <joppe@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/28 22:10:59 by joppe         #+#    #+#                 */
/*   Updated: 2020/09/28 22:11:59 by joppe         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "types.h"
#include "string.h"

uint64_t	ft_match_str(char **arr, uint64_t size, char *str)
{
	int64_t 	low;
	int64_t 	high;
	uint64_t 	best_i;
	int64_t		mid;
	int8_t		cmp;

	if (size == 0)
		return (0);
	low = 0;
	high = (int64_t)size - 1;
	best_i = size - 1;
	while (low <= high)
	{
		mid = (low + high) / 2;
		best_i = mid;
		cmp = ft_strcmp(str, arr[mid]);
		if (cmp < 0)
			high = mid - 1;
		else if (cmp > 0)
			low = mid + 1;
		else
			return (mid);
	}
	return (best_i);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_str_bin_search.c                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: joppe <joppe@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/28 22:09:17 by joppe         #+#    #+#                 */
/*   Updated: 2020/09/28 22:09:24 by joppe         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "types.h"
#include "string.h"

int64_t	ft_str_bin_search(char **arr, uint64_t size, char *str)
{
	int64_t 	low;
	int64_t 	high;
	int64_t		mid;
	int8_t		cmp;

	if (size == 0)
		return (-1);
	low = 0;
	high = (int64_t)size - 1;
	while (low <= high)
	{
		mid = (low + high) / 2;
		cmp = ft_strcmp(str, arr[mid]);
		if (cmp < 0)
			high = mid - 1;
		else if (cmp > 0)
			low = mid + 1;
		else
			return ((uint64_t)mid);
	}
	return (-1);
}

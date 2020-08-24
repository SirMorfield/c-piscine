/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_search.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: joppe <joppe@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/15 22:41:49 by joppe         #+#    #+#                 */
/*   Updated: 2020/08/24 01:43:30 by joppe         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "types.h"
#include "ft_string.h"
#include "ft_memory.h"
#include <stdlib.h>

int		bin_search_first(int arr[], int x, int arr_size)
{
	int low = 0;
	int high = arr_size - 1;
	int res = -1;
	int mid;

	while (low <= high) {
		mid = (low + high) / 2;
		if (arr[mid] > x)
			high = mid - 1;
		else if (arr[mid] < x)
			low = mid + 1;
		else
		{
			res = mid;
			high = mid - 1;
		}
	}
	return (res);
}

int		bin_search_last(int arr[], int x, int arr_size)
{
	int low = 0;
	int high = arr_size - 1;
	int res = -1;
	int mid;

	while (low <= high) {
		mid = (low + high) / 2;
		if (arr[mid] > x)
			high = mid - 1;
		else if (arr[mid] < x)
			low = mid + 1;
		else
		{
			res = mid;
			low = mid + 1;
		}
	}
	return (res);
}

uint64_t	*insert_int(uint64_t *arr, uint64_t size, uint64_t x, uint64_t i)
{
	uint64_t *new;
	uint64_t new_size;
	uint64_t items_before;
	uint64_t items_after;

	if (i < size) {
		new_size = size + 1;
		items_before = i;
		items_after = size - i;
	}
	else
	{
		new_size = i + 1;
		items_before = size;
		items_after = 0;
	}
	new = malloc(new_size * sizeof(uint64_t));
	ft_memcpy(new, arr, items_before * sizeof(uint64_t));
	new[i] = x;
	ft_memcpy(new + i + 1, arr + items_before, items_after * sizeof(uint64_t));
	free(arr);
	return (new);
}

char	**insert_str(char **arr, uint64_t size, char *str, uint64_t i)
{
	char **new;
	uint64_t new_size;
	uint64_t strings_before;
	uint64_t strings_after;

	if (i < size)
	{
		new_size = size + 1;
		strings_before = i;
		strings_after = size - i;
	}
	else
	{
		new_size = i + 1;
		strings_before = size;
		strings_after = 0;
	}
	new = malloc(new_size * sizeof(char *));
	ft_memcpy(new, arr, strings_before * sizeof(char *));
	if (i >= size)
		ft_memset(new, 0, i - strings_before);
	new[i] = str;
	ft_memcpy(new + i + 1, arr + strings_before, strings_after * sizeof(char *));
	free(arr);
	return (new);
}

uint64_t	clostest_match_i(char **arr, uint64_t arr_size, char *str)
{
	int64_t low = 0;
	int64_t high = (int64_t)arr_size - 1;
	int64_t best_i = arr_size - 1;
	int64_t mid;
	int		cmp;

	while (low <= high)
	{
		mid = (low + high) / 2;
		best_i = mid;
		cmp = ft_strcmp(str, arr[mid]);
		if (cmp < 0)
			high = mid - 1;
		else if (cmp > 0)
			low = mid + 1;
		else if (cmp == 0)
			return (mid);
	}
	return (best_i);
}

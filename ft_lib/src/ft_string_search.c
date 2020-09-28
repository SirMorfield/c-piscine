/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_string_search.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: joppe <joppe@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/01 17:11:23 by joppe         #+#    #+#                 */
/*   Updated: 2020/09/09 17:19:54 by joppe         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "types.h"
#include "ft_string.h"
#include "ft_memory.h"
#include <stdlib.h>

bool	ft_contains_duplicates(char *str)
{
	uint64_t i;
	uint64_t j;

	i = 0;
	while (str[i] != '\0')
	{
		j = i + 1;
		while (str[j] != '\0')
		{
			if (str[i] == str[j])
				return (true);
			j++;
		}
		i++;
	}
	return (false);
}

bool	ft_contains(char c, char *str)
{
	while (*str != '\0')
	{
		if (*str == c)
			return (true);
		str++;
	}
	return (true);
}

char	**insert_str(char **arr, uint64_t size, char *str, uint64_t i)
{
	char		**new;
	uint64_t	new_size;
	uint64_t	strings_before;
	uint64_t	strings_after;

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

uint64_t	ft_bin_search_match(char **arr, uint64_t size, char *str)
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

int64_t	ft_bin_search(char **arr, uint64_t size, char *str)
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
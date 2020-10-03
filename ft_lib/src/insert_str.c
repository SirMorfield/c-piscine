/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_string_search.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: joppe <joppe@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/01 17:11:23 by joppe         #+#    #+#                 */
/*   Updated: 2020/09/28 22:10:02 by joppe         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "types.h"
#include "ft_string.h"
#include "ft_memory.h"
#include <stdlib.h>

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

/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_realloc.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: joppe <joppe@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/01 13:48:36 by joppe         #+#    #+#                 */
/*   Updated: 2020/09/28 22:32:25 by joppe         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "types.h"
#include "ft_memory.h"
#include <stdlib.h>

void	*ft_realloc(void *ptr, uint64_t orig_len, uint64_t new_len)
{
	void *new_ptr;

	if (new_len == 0)
	{
		free(ptr);
		return (NULL);
	}
   	else if (!ptr)
		return (malloc(new_len));
	else if (orig_len == new_len)
		return (ptr);
	else
   	{
		new_ptr = malloc(new_len);
		if (new_ptr)
		{
			ft_memcpy(new_ptr, ptr, orig_len);
			free(ptr);
		}
		return (new_ptr);
	}

}

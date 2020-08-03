/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memory.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: joppe <joppe@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/01 13:48:36 by joppe         #+#    #+#                 */
/*   Updated: 2020/08/02 23:21:43 by joppe         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "stdint-gcc.h"
#include <stdlib.h>

void	*ft_memcpy(void *dest, void *src, uint64_t len)
{
	uint8_t *d = dest;
	uint8_t *s = src;
	while (len--)
		*d++ = *s++;
	return (dest);
}

void	*ft_realloc(void *ptr, uint64_t orig_len, uint64_t new_len)
{
	void *new_ptr;

	if (new_len == 0)
	{
		free(ptr);
		return (NULL);
	}
   	else if (!ptr)
		return malloc(new_len);
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

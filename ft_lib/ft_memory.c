/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memory.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: joppe <joppe@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/01 13:48:36 by joppe         #+#    #+#                 */
/*   Updated: 2020/09/07 01:46:00 by joppe         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "types.h"
#include "ft_memory.h"
#include <stdlib.h>

void	*ft_memcpy(void *dest, void *src, uint64_t len)
{
	uint8_t *d;
	uint8_t *s;

	d = dest;
	s = src;
	while (len)
	{
		*d = *s;
		d++;
		s++;
		len--;
	}
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

void	ft_memset(void *s, uint8_t c, uint64_t n)
{
	uint8_t *s1;

	s1 = s;
	while (n > 0)
	{
		n--;
		s1[n] = c;
	}
}

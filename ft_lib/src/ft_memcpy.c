/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcpy.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: joppe <joppe@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/01 13:48:36 by joppe         #+#    #+#                 */
/*   Updated: 2020/10/03 22:41:48 by joppe         ########   odam.nl         */
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
	while (len > 0)
	{
		*d = *s;
		d++;
		s++;
		len--;
	}
	return (dest);
}
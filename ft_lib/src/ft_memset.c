/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memset.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: joppe <joppe@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/01 13:48:36 by joppe         #+#    #+#                 */
/*   Updated: 2020/09/28 22:32:43 by joppe         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "types.h"
#include "ft_memory.h"
#include <stdlib.h>

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

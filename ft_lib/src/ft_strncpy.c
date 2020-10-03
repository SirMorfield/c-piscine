/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strncpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: joppe <joppe@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/23 00:40:04 by joppe         #+#    #+#                 */
/*   Updated: 2020/10/03 22:34:47 by joppe         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"
#include <stdlib.h>

char	*ft_strncpy(char *dest, char *src, uint64_t n)
{
	uint64_t i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		if (src[i] == '\0')
			break ;
		i++;
	}
	return (dest + i);
}

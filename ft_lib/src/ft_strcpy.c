/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strcpy.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: joppe <joppe@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/23 00:40:04 by joppe         #+#    #+#                 */
/*   Updated: 2020/10/05 22:45:06 by joppe         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "types.h"
#include "ft_string.h"
#include "ft_memory.h"

char	*ft_strcpy(char *dest, char *src)
{
	uint64_t src_len;

	src_len = ft_strlen(src);
	ft_memcpy(dest, src, (len + 1) * sizeof(char));
	return (dest);
}

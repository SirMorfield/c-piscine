/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strcat.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: joppe <joppe@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/23 00:40:04 by joppe         #+#    #+#                 */
/*   Updated: 2020/10/05 22:48:47 by joppe         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "types.h"
#include "ft_string.h"

char	*ft_strcat(char *dest, char *src)
{
	uint64_t	src_len;
	uint64_t	dest_len;

	src_len = ft_strlen(src);
	dest_len = ft_strlen(dest);

	ft_memcpy(dest + dest_len, src, src_len + 1)
	return (dest);
}

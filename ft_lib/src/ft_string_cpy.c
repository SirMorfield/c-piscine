/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_string_cpy.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: joppe <joppe@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/23 00:40:04 by joppe         #+#    #+#                 */
/*   Updated: 2020/08/24 14:56:12 by joppe         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"
#include <stdlib.h>

char	*ft_strcpy(char *dest, char *src)
{
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (dest);
}

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

char	*ft_strcat(char *dest, char *src)
{
	char *dest_cpy;

	dest_cpy = dest;
	while (*dest != '\0')
		dest++;
	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
	return (dest_cpy);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int last_digit;
	unsigned int i;

	last_digit = ft_strlen(dest);
	i = 0;
	while (i < nb && src[i] != '\0')
	{
		dest[last_digit] = src[i];
		i++;
		last_digit++;
	}
	dest[last_digit] = '\0';
	return (dest);
}

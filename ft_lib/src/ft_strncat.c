/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strncat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: joppe <joppe@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/23 00:40:04 by joppe         #+#    #+#                 */
/*   Updated: 2020/10/03 22:35:28 by joppe         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"
#include <stdlib.h>

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

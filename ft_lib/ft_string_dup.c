/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_string_dup.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: joppe <joppe@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/24 14:56:13 by joppe         #+#    #+#                 */
/*   Updated: 2020/08/24 14:58:08 by joppe         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		len;
	char	*dup;

	len = ft_strlen(src) + 1;
	dup = malloc(len);
	if(dup == NULL)
		return (NULL);
	ft_strcpy(dup, src);
	return (dup);
}

char *ft_strndup(char *str, uint64_t len)
{
	char *dup;

	dup = malloc((len + 1) * sizeof(char));
	if(dup == NULL)
		return (NULL);
	ft_strncpy(dup, str, len);
	dup[len] = '\0';
	return (dup);
}

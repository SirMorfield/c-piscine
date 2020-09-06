/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_string_dup.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: joppe <joppe@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/24 14:56:13 by joppe         #+#    #+#                 */
/*   Updated: 2020/08/30 00:46:34 by joppe         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"
#include <stdlib.h>

char *ft_strndup(char *str, uint64_t len)
{
	char *dup;

	dup = malloc((len + 1) * sizeof(char));
	if (dup == NULL)
		return (NULL);
	ft_strncpy(dup, str, len);
	dup[len] = '\0';
	return (dup);
}

char *ft_strdup(char *src)
{
	uint64_t len;

	len = ft_strlen(src);
	return (ft_strndup(src, len));
}
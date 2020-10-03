/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strdup.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: joppe <joppe@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/24 14:56:13 by joppe         #+#    #+#                 */
/*   Updated: 2020/10/03 22:36:40 by joppe         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"
#include <stdlib.h>

char *ft_strdup(char *src)
{
	uint64_t len;

	len = ft_strlen(src);
	return (ft_strndup(src, len));
}

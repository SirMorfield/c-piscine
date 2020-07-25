/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_helpers.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jkoers <jkoers@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/25 14:41:08 by jkoers        #+#    #+#                 */
/*   Updated: 2020/07/25 15:51:43 by jkoers        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_helpers.h"

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

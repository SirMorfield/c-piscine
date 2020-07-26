/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_helpers.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jkoers <jkoers@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/25 14:41:08 by jkoers        #+#    #+#                 */
/*   Updated: 2020/07/26 12:35:01 by jkoers        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_helpers.h"
#include <unistd.h>

void	ft_putstr(char *str)
{
	unsigned long i;

	i = 0;
	while (str[i] != '\0')
		i++;
	write(1, str, i);
}

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

int is_number(char c)
{
	return (c >= '0' && c <= '9');
}

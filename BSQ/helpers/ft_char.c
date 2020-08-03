/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_char.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: jkoers <jkoers@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/27 14:48:40 by jkoers        #+#    #+#                 */
/*   Updated: 2020/08/03 22:26:07 by joppe         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_str.h"

uint8_t	ft_is_space(char c)
{
	char *spaces;

	spaces = "\t\n\v\f\r ";
	while (*spaces != '\0')
	{
		if (c == *spaces)
			return (1);
		spaces++;
	}
	return (0);
}

uint8_t	ft_is_digit(char c)
{
	return (c >= '0' && c <= '9');
}

uint8_t	ft_is_printable(char c)
{
	return (c >= ' ' && c <= '~');
}

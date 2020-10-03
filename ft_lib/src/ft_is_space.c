/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_is_space.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: jkoers <jkoers@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/27 14:48:40 by jkoers        #+#    #+#                 */
/*   Updated: 2020/10/03 22:31:34 by joppe         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"
#include "types.h"

bool	ft_is_space(char c)
{
	char *spaces;

	spaces = "\t\n\v\f\r ";
	while (*spaces != '\0')
	{
		if (c == *spaces)
			return (true);
		spaces++;
	}
	return (false);
}

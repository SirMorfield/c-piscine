/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_is_letter.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: jkoers <jkoers@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/27 14:48:40 by jkoers        #+#    #+#                 */
/*   Updated: 2020/10/03 22:30:31 by joppe         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"
#include "types.h"

bool	ft_is_letter(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (true);
	if (c >= 'a' && c <= 'z')
		return (true);
	return (false);
}

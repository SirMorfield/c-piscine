/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_is_printable.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: jkoers <jkoers@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/27 14:48:40 by jkoers        #+#    #+#                 */
/*   Updated: 2020/10/03 22:30:58 by joppe         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"
#include "types.h"

bool	ft_is_printable(char c)
{
	return (c >= ' ' && c <= '~');
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putchar.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jkoers <marvin@codam.nl>                     +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/09 13:07:29 by jkoers        #+#    #+#                 */
/*   Updated: 2020/09/10 23:43:57 by joppe         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

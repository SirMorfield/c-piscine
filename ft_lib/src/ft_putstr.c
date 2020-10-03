/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putstr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: joppe <joppe@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/28 22:24:08 by joppe         #+#    #+#                 */
/*   Updated: 2020/09/28 22:25:30 by joppe         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "types.h"
#include "ft_io.h"
#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
}

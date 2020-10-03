/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_write_str.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: joppe <joppe@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/28 22:24:08 by joppe         #+#    #+#                 */
/*   Updated: 2020/09/28 22:25:08 by joppe         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "types.h"
#include "ft_io.h"
#include <unistd.h>

void	write_str(int32_t fd, char *str)
{
	while (*str != '\0')
	{
		write(fd, str, 1);
		str++;
	}
}

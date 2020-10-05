/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_write_str.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: joppe <joppe@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/28 22:24:08 by joppe         #+#    #+#                 */
/*   Updated: 2020/10/05 22:52:30 by joppe         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "types.h"
#include "ft_io.h"
#include <unistd.h>

void	write_str(int32_t fd, char *str)
{
	uint64_t len;

	len = ft_strlen(str);
	write(fd, str, len);
}

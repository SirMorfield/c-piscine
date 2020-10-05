/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putstr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: joppe <joppe@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/28 22:24:08 by joppe         #+#    #+#                 */
/*   Updated: 2020/10/05 22:37:19 by joppe         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "types.h"
#include "ft_io.h"
#include <unistd.h>

void	ft_putstr(char *str)
{
	uint64_t len;

	len = ft_strlen(str);
	write(1, str, len);
}

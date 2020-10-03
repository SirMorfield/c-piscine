/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_string.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: joppe <joppe@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/29 19:34:13 by joppe         #+#    #+#                 */
/*   Updated: 2020/08/23 23:14:21 by joppe         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "types.h"
#include "ft_string.h"

uint64_t		ft_strlen(char *str)
{
	uint64_t	length;

	if (str == NULL)
		return (0);
	length = 0;
	while (str[length] != '\0')
		length++;
	return (length);
}

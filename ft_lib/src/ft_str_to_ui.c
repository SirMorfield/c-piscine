/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_str_to_ui.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: joppe <joppe@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/28 22:18:43 by joppe         #+#    #+#                 */
/*   Updated: 2020/09/28 22:19:22 by joppe         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "types.h"
#include "string.h"
#include "ft_int.h"

uint64_t	ft_str_to_ui(char *str)
{
	uint64_t	result;

	if (!str || str[0] == '\0')
		return (0);
	while (!ft_is_digit(*str))
	{
		str++;
		if (*str == '\0')
			return (0);
	}
	result = 0;
	while (ft_is_digit(*str))
	{
		result *= 10;
		result += (uint64_t)(*str - '0');
		str++;
	}
	return (result);
}

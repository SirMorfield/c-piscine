/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_str_to_i.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: joppe <joppe@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/28 22:18:43 by joppe         #+#    #+#                 */
/*   Updated: 2020/09/28 22:19:11 by joppe         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "types.h"
#include "string.h"
#include "ft_int.h"

int64_t		ft_str_to_i(char *str)
{
	int64_t	result;
	bool	is_negative;

	if (!str || str[0] == '\0')
		return (0);
	while (!ft_is_digit(*str))
	{
		str++;
		if (*str == '\0')
			return (0);
	}
	is_negative = *str == '-';
	str++;
	result = 0;
	while (ft_is_digit(*str))
	{
		result *= 10;
		result -= (int64_t)(*str - '0');
		str++;
	}
	return (is_negative ? result : -result);
}

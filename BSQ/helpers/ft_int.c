/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_int.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: joppe <joppe@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/03 22:27:15 by joppe         #+#    #+#                 */
/*   Updated: 2020/08/03 22:28:56 by joppe         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_str.h"

int		ft_atoi(char *str)
{
	long	result;
	int		multiplier;

	result = 0;
	multiplier = 1;
	if (!str || str[0] == '\0')
		return (0);
	while (ft_is_space(*str))
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			multiplier = -multiplier;
		str++;
	}
	while (*str != '\0' && ft_is_digit(*str))
	{
		result *= 10;
		result += (long)(*str - '0');
		str++;
	}
	return ((int)(result * multiplier));
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: jkoers <jkoers@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/27 14:48:40 by jkoers        #+#    #+#                 */
/*   Updated: 2020/07/27 14:52:56 by jkoers        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_atoi.h"

int		ft_is_space(char c)
{
	char *spaces;

	spaces = "\t\n\v\f\r ";
	while (*spaces != '\0')
	{
		if (c == *spaces)
			return (1);
		spaces++;
	}
	return (0);
}

int		ft_is_digit(char c)
{
	return (c >= '0' && c <= '9');
}

int		ft_atoi(char *str)
{
	long			result;
	int				multiplier;

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

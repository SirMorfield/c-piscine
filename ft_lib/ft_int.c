/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_int.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: joppe <joppe@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/03 22:27:15 by joppe         #+#    #+#                 */
/*   Updated: 2020/09/07 14:33:39 by joppe         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"
#include "ft_memory.h"
#include <stdlib.h>
#include "ft_math.h"
#include "ft_string.h"

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

#include <stdio.h>
char	*i_to_str(int64_t n)
{
	char	*res;
	uint8_t	i;
	bool	is_negative;

	i = 0;
	res = malloc(22 * sizeof(char));
	is_negative = n < 0;
	while (true)
	{
		res[i] = (char)ft_abs(n % 10);
		res[i] += '0';
		n /= 10;
		i++;
		if (n == 0)
			break ;
	}
	if (is_negative)
	{
		printf("yte\n");
		res[i] = '-';
		i++;
	}
	ft_strnrev(res, i);
	res[i] = '\0';
	res = ft_realloc(res, i + 1, i + 1);
	return (res);
}

char	*ui_to_str(uint64_t n)
{
	char		*res;
	uint64_t	i;

	i = 0;
	res = malloc(21 * sizeof(char));
	while (true)
	{
		res[i] = (char)((n % 10) + '0');
		n /= 10;
		i++;
		if (n == 0)
			break ;
	}
	ft_strnrev(res, i);
	res[i] = '\0';
	res = ft_realloc(res, i + 1, i + 1);
	return (res);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_str_search.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: joppe <joppe@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/01 17:11:23 by joppe         #+#    #+#                 */
/*   Updated: 2020/08/01 17:13:58 by joppe         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

# include <stdint-gcc.h>
#include "ft_str.h"

uint8_t	ft_contains_duplicates(char *str)
{
	uint64_t i;
	uint64_t j;

	i = 0;
	while (str[i] != '\0')
	{
		j = i + 1;
		while (str[j] != '\0')
		{
			if (str[i] == str[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

uint8_t	ft_contains(char c, char *str)
{
	while (*str != '\0')
	{
		if (*str == c)
			return (1);
		str++;
	}
	return (0);
}

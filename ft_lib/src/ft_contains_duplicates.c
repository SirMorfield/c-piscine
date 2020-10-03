/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_contains_duplicates.c                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: joppe <joppe@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/28 22:06:43 by joppe         #+#    #+#                 */
/*   Updated: 2020/09/28 22:07:02 by joppe         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "types.h"
#include "string.h"

bool	ft_contains_duplicates(char *str)
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
				return (true);
			j++;
		}
		i++;
	}
	return (false);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_math.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: joppe <joppe@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/15 23:02:29 by joppe         #+#    #+#                 */
/*   Updated: 2020/09/07 02:18:31 by joppe         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_math.h"


int64_t		ft_power(int64_t nb, int64_t power)
{
	int64_t result;

	result = nb;
	if (power == 0)
		return (1);
	while (power > 1)
	{
		result *= nb;
		power--;
	}
	return (result);
}

int		ft_sqrt(int nb)
{
	int i;

	i = 0;
	if (nb > 0)
	{
		while (i < 46432)
		{
			if (i * i == nb)
				return (i);
			i++;
		}
	}
	return (0);
}

int64_t	ft_abs(int64_t i)
{
  return (i < 0 ? -i : i);
}

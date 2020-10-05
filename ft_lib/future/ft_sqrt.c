/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_sqrt.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: joppe <joppe@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/15 23:02:29 by joppe         #+#    #+#                 */
/*   Updated: 2020/09/28 22:27:55 by joppe         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "types.h"
#include "ft_math.h"

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

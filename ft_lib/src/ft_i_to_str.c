/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_i_to_str.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: joppe <joppe@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/28 22:18:43 by joppe         #+#    #+#                 */
/*   Updated: 2020/09/28 22:22:17 by joppe         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "types.h"
#include "ft_int.h"
#include "string.h"
#include "ft_memory.h"
#include "ft_math.h"
#include <stdlib.h>

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
		res[i] = '-';
		i++;
	}
	ft_strnrev(res, i);
	res[i] = '\0';
	res = ft_realloc(res, i + 1, i + 1);
	return (res);
}

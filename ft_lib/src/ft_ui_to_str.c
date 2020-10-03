/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_ui_to_str.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: joppe <joppe@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/28 22:18:43 by joppe         #+#    #+#                 */
/*   Updated: 2020/09/28 22:20:54 by joppe         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "types.h"
#include "ft_int.h"
#include "string.h"
#include "ft_memory.h"
#include <stdlib.h>

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

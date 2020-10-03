/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strnrev.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: joppe <joppe@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/07 13:57:16 by joppe         #+#    #+#                 */
/*   Updated: 2020/10/03 22:37:40 by joppe         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */


#include "types.h"
#include "ft_string.h"

void	ft_strnrev(char *str, uint64_t len)
{
	char		left;
	uint64_t	left_i;
	uint64_t	right_i;

	if(len <= 1)
		return ;
	left_i = 0;
	right_i = len - 1;
	while (left_i < right_i)
	{
		left = str[left_i];
		str[left_i] = str[right_i];
		str[right_i] = left;
		left_i++;
		right_i--;
	}
}

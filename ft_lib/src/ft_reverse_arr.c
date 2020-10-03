/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_reverse_arr.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: joppe <joppe@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/15 22:57:36 by joppe         #+#    #+#                 */
/*   Updated: 2020/09/28 22:14:33 by joppe         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "types.h"
#include "ft_array.h"

void	ft_reverse_arr(uint64_t *arr, uint64_t size)
{
	uint64_t	left;
	uint64_t	left_i;
	uint64_t	right_i;

	if(size <= 1)
		return ;
	left_i = 0;
	right_i = size - 1;
	while (left_i < right_i)
	{
		left = arr[left_i];
		arr[left_i] = arr[right_i];
		arr[right_i] = left;
		left_i++;
		right_i--;
	}
}

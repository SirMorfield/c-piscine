/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_array.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: joppe <joppe@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/15 22:57:36 by joppe         #+#    #+#                 */
/*   Updated: 2020/09/07 13:54:36 by joppe         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_array.h"
#include "types.h"
void	ft_rev_uint64_arr(uint64_t *arr, uint64_t size)
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

void	ft_rev_int64_arr(int64_t *arr, uint64_t size)
{
	int64_t		left;
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

void	ft_sort_int_arr(int *arr, int size)
{
	int			tmp;
	long long	i;
	long long	j;

	if (size <= 1)
		return ;
	while (i < size)
	{
		while (j < size)
		{
			if (arr[j] > arr[i])
			{
				tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp;
			}
			j++;
		}
		i++;
	}
}
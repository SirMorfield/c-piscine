/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   tester.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: joppe <joppe@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/05 00:42:53 by joppe         #+#    #+#                 */
/*   Updated: 2020/09/05 00:52:08 by joppe         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_io.h"

int main(void)
{
	uint64_t arr[] = {1, 354, 0};

	write_uint64_arr(1, arr, 3);

	return (0);
}
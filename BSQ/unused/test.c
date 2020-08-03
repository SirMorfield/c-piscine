/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   test.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: joppe <joppe@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/02 22:53:24 by joppe         #+#    #+#                 */
/*   Updated: 2020/08/02 23:33:41 by joppe         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "helpers/ft_file.h"
#include <stdio.h>

int		main(void)
{
	char	*buf;

	buf = ft_read_file("result.txt");

	printf(">%s<\n", buf);
	return (0);
}
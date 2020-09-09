/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   tester.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: joppe <joppe@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/05 00:42:53 by joppe         #+#    #+#                 */
/*   Updated: 2020/09/09 17:22:44 by joppe         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_io.h"
#include "ft_int.h"

int main(void)
{
	char *str = i_to_str(-9223372036854775807LL);
	ft_putstr(str);
	ft_putstr("\n");
	return (0);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_reverse_alphabet.c                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: jkoers <jkoers@student.42.fr>                +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/11 10:32:29 by jkoers        #+#    #+#                 */
/*   Updated: 2020/07/12 13:23:03 by jkoers        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char c;

	c = 'z';
	while (c >= 'a')
	{
		write(1, &c, 1);
		c--;
	}
}

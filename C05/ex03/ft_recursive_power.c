/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_recursive_power.c                               :+:    :+:            */
/*                                                     +:+                    */
/*   By: jkoers <jkoers@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/16 17:34:48 by jkoers        #+#    #+#                 */
/*   Updated: 2020/07/29 12:57:06 by jkoers        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (power == 1)
		return (nb);
	else
		return (nb * ft_recursive_power(nb, power - 1));
}

/*
**#include <stdio.h>
**int main()
**{
**	printf("%d 1\n",		ft_recursive_power(0, 0));
**	printf("%d 1\n",		ft_recursive_power(-1, 0));
**	printf("%d 1\n",		ft_recursive_power(-1, 10));
**	printf("%d 1\n",		ft_recursive_power(-1, 2));
**	printf("%d 0\n",		ft_recursive_power(-1, -1));
**	printf("%d -262144\n",	ft_recursive_power(-4, 9));
**	printf("%d -102\n",		ft_recursive_power(-102, 1));
**	printf("%d 8\n",		ft_recursive_power(2, 3));
**	printf("%d 256\n",		ft_recursive_power(4, 4));
**	printf("%d 16777216\n",	ft_recursive_power(8, 8));
**	return (0);
**}
*/

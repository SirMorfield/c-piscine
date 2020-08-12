/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_recursive_factorial.c                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jkoers <jkoers@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/16 17:07:33 by jkoers        #+#    #+#                 */
/*   Updated: 2020/07/29 13:51:54 by jkoers        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	if (nb <= 2)
		return (nb);
	else
		return (nb * ft_recursive_factorial(nb - 1));
}

/*
**#include <stdio.h>
**
**int main()
**{
**	printf("%d 0\n", ft_recursive_factorial(-79));
**	printf("%d 1\n", ft_recursive_factorial(0));
**	printf("%d 1\n", ft_recursive_factorial(1));
**	printf("%d 2\n", ft_recursive_factorial(2));
**	printf("%d 6\n", ft_recursive_factorial(3));
**	printf("%d 479001600\n", ft_recursive_factorial(12));
**	return (0);
**}
*/

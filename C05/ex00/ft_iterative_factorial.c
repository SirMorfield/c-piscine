/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_iterative_factorial.c                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jkoers <jkoers@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/16 16:58:37 by jkoers        #+#    #+#                 */
/*   Updated: 2020/07/29 13:52:17 by jkoers        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int i;
	int factorial;

	i = 1;
	factorial = 1;
	if (nb < 0)
		return (0);
	while (i <= nb)
	{
		factorial *= i;
		i++;
	}
	return (factorial);
}

/*
**#include <stdio.h>
**
**int main()
**{
**	printf("%d 0\n", ft_iterative_factorial(-79));
**	printf("%d 1\n", ft_iterative_factorial(0));
**	printf("%d 1\n", ft_iterative_factorial(1));
**	printf("%d 2\n", ft_iterative_factorial(2));
**	printf("%d 6\n", ft_iterative_factorial(3));
**	printf("%d 479001600\n", ft_iterative_factorial(12));
**	return (0);
**}
*/

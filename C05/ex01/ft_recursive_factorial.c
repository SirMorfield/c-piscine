/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_recursive_factorial.c                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jkoers <jkoers@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/16 17:07:33 by jkoers        #+#    #+#                 */
/*   Updated: 2020/07/28 14:07:38 by jkoers        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb <= 3)
		return (nb * (nb - 1));
	else
		return (nb * ft_recursive_factorial(nb - 1));
}

/*
** #include <stdio.h>
** int main()
** {
** 	printf("%d", ft_recursive_factorial(10));
** 	return (0);
** }
*/

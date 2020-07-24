/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_recursive_power.c                               :+:    :+:            */
/*                                                     +:+                    */
/*   By: jkoers <jkoers@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/16 17:34:48 by jkoers        #+#    #+#                 */
/*   Updated: 2020/07/16 17:35:03 by jkoers        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include

int		ft_iterative_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (nb == 0 && power == 0)
		return (1);
	if (power == 1)
		return nb;
	else
		return (ft_iterative_power(nb * nb, power - 1))
}

int main()
{
	printf("%d", ft_recursive_factorial(10));
	return (0);
}
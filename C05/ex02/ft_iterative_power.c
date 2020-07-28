/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_iterative_power.c                               :+:    :+:            */
/*                                                     +:+                    */
/*   By: jkoers <jkoers@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/16 17:23:51 by jkoers        #+#    #+#                 */
/*   Updated: 2020/07/28 14:10:06 by jkoers        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int multiplier;

	multiplier = nb;
	if (power < 0)
		return (0);
	if (nb == 0 && power == 0)
		return (1);
	if (power == 0)
		return (nb);
	while (power > 1)
	{
		nb *= multiplier;
		power--;
	}
	return (nb);
}

/*
** #include <stdio.h>
**
** int main()
** {
** 	printf("%d", ft_iterative_power(10));
** 	return (0);
** }
*/

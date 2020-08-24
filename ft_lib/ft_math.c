/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_math.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: joppe <joppe@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/15 23:02:29 by joppe         #+#    #+#                 */
/*   Updated: 2020/08/15 23:03:04 by joppe         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int		ft_factorial(int nb)
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

int		ft_iterative_power(int nb, int power)
{
	int result;

	result = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power > 1)
	{
		result *= nb;
		power--;
	}
	return (result);
}

int		ft_sqrt(int nb)
{
	int i;

	i = 0;
	if (nb > 0)
	{
		while (i < 46432)
		{
			if (i * i == nb)
				return (i);
			i++;
		}
	}
	return (0);
}

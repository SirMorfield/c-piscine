/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putnbr_base.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: jkoers <jkoers@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/15 14:21:36 by jkoers        #+#    #+#                 */
/*   Updated: 2020/07/25 12:14:10 by jkoers        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		contains_duplicates(char *arr)
{
	unsigned long i;
	unsigned long j;

	i = 0;
	while (arr[i] != '\0')
	{
		j = i + 1;
		while (arr[j] != '\0')
		{
			if (arr[i] == arr[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int		get_base_n(char *base)
{
	unsigned int	i;

	i = 0;
	if (!base)
		return (1);
	if (base[0] == '\0' || base[1] == '\0')
		return (-1);
	if (contains_duplicates(base))
		return (-1);
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-')
			return (-1);
		i++;
	}
	i = 0;
	while (base[i] != '\0')
		i++;
	return ((int)i);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		result_i;
	long	nbr_cpy;
	int		base_n;
	char	results[33];

	result_i = 0;
	nbr_cpy = nbr < 0 ? -((long)nbr) : (long)nbr;
	base_n = get_base_n(base);
	if (base_n == -1)
		return ;
	while (1)
	{
		results[result_i] = base[nbr_cpy % base_n];
		nbr_cpy /= base_n;
		result_i++;
		if (nbr_cpy == 0)
			break ;
	}
	if (nbr < 0)
		write(1, "-", 1);
	while (result_i > 0)
	{
		write(1, results + result_i, 1);
		result_i--;
	}
}

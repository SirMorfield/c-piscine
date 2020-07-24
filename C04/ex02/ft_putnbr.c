/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putnbr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: jkoers <jkoers@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/14 19:05:11 by jkoers        #+#    #+#                 */
/*   Updated: 2020/07/23 17:00:54 by jkoers        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	nth_least_sig_digit(long long x, int n)
{
	if (x < 0)
		x = -x;
	while (n > 0)
	{
		x /= 10;
		n--;
	}
	return (x % 10) + '0';
}

int		find_first_significant_digit(int n)
{
	int		i;

	i = 9;
	while (i > 0)
	{
		if (nth_least_sig_digit((long long)n, i) != '0')
		{
			break ;
		}	
		i--;
	}
	return (i);
}

void	ft_putnbr(int n)
{
	char	c;
	int		start;

	if (n == 0)
	{
		write(1, "0", 1);
		return ;
	}
	if (n < 0)
		write(1, "-", 1);
	start = find_first_significant_digit(n);
	while (start >= 0)
	{
		c = nth_least_sig_digit((long long)n, start);
		write(1, &c, 1);
		start--;
	}
}

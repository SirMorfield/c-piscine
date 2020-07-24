/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   asd.c                                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: jkoers <jkoers@student.42.fr>                +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/11 16:46:36 by jkoers        #+#    #+#                 */
/*   Updated: 2020/07/11 17:38:05 by jkoers        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	stupid25(char a, char b, char c, char d)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, " ", 1);
	write(1, &c, 1);
	write(1, &d, 1);
}

void	ft_print_comb2(void)
{
	char	num1a[4];
	int		num1;
	int		num2;

	num1 = 0;
	while (num1 <= 98)
	{
		num2 = num1 + 1;
		while (num2 <= 99)
		{
			num2 = num2 <= num1 ? num1 + 1 : num2;
			num1a[0] = (num1 / 10) + '0';
			num1a[1] = num1 < 10 ? num1 + '0' : (num1 % 10) + '0';
			num1a[2] = (num2 / 10) + '0';
			num1a[3] = num2 < 10 ? num2 + '0' : (num2 % 10) + '0';
			stupid25(num1a[0], num1a[1], num1a[2], num1a[3]);
			if (num1 != 98)
				write(1, ", ", 2);
			num2++;
		}
		num1++;
	}
}

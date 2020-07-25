/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   C04test.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: jkoers <jkoers@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/25 10:45:30 by jkoers        #+#    #+#                 */
/*   Updated: 2020/07/25 12:09:59 by jkoers        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

#include "ex00/ft_strlen.c"
#include "ex01/ft_putstr.c"
#include "ex02/ft_putnbr.c"
#include "ex03/ft_atoi.c"
#include "ex04/ft_putnbr_base.c"

int main()
{
	printf("%d\n", ft_strlen("123"));
	printf("%d\n", ft_strlen(""));

	ft_putstr("aa");
	printf("\n");
	ft_putstr("");
	printf("\n\n");

	ft_putnbr(2147483647);
	printf("\n");
	ft_putnbr(-2147483648);
	printf("\n");
	ft_putnbr(0);
	printf("\n");
	ft_putnbr(-1);
	printf("\n\n");

	printf("%d\n", ft_atoi("2147483647"));
	printf("%d\n", ft_atoi("-2147483648"));
	printf("%d\n", ft_atoi("-123"));
	printf("%d\n", ft_atoi(""));
	printf("%d\n", ft_atoi("abc"));
	printf("%d\n", ft_atoi("+123"));
	printf("%d\n", ft_atoi("--123"));
	printf("%d\n", ft_atoi("  -999 3"));
	printf("%d\n", ft_atoi("  --12 3"));
	printf("%d\n\n", ft_atoi("  -+-12 3"));

	ft_putnbr_base(10, "0123456789");
	printf("\n");
	ft_putnbr_base(0, "0123456789");
	printf("\n");
	ft_putnbr_base(2147483647, "0123456789");
	printf("\n");
	ft_putnbr_base(-2147483648, "0123456789");
	printf("\n");
	ft_putnbr_base(2147483647, "0123456789ABCDEF"); // 7FFFFFFF
	printf("\n");
	ft_putnbr_base(-2147483647, "0123456789ABCDEF"); // -7FFFFFFF ?
	printf("\n");
	ft_putnbr_base(123, "abc");
	printf("\n");
	ft_putnbr_base(255, "01");
	printf("\n");

	return (0);
}

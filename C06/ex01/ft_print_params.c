/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_params.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: joppe <joppe@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/20 13:35:33 by joppe         #+#    #+#                 */
/*   Updated: 2020/07/28 17:24:35 by jkoers        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putstr(char *str)
{
	unsigned long i;

	i = 0;
	while (str[i] != '\0')
		i++;
	write(1, str, i);
}

void	ft_print_params(int argc, char **argv)
{
	int i;

	i = 1;
	while (i < argc)
	{
		ft_putstr(argv[i]);
		write(1, "\n", 1);
		i++;
	}
}

int		main(int argc, char **argv)
{
	ft_print_params(argc, argv);
	return (0);
}

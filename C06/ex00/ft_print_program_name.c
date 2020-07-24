/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_program_name.c                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: joppe <joppe@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/20 13:31:21 by joppe         #+#    #+#                 */
/*   Updated: 2020/07/20 13:34:05 by joppe         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	unsigned long i;

	i = 0;
	while (str[i] != '\0')
		i++;
	write(1, str, i);
}

int		main(int argc, char **argv)
{
	ft_putstr(argv[0]);
	return (0);
}

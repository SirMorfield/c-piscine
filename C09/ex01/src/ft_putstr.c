/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putstr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: jkoers <jkoers@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/12 11:25:44 by jkoers        #+#    #+#                 */
/*   Updated: 2020/09/10 23:44:33 by joppe         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	unsigned long i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, str + i, 1);
		i++;
	}
}

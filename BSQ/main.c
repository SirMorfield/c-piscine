/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: jkoers <jkoers@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/27 15:06:10 by jkoers        #+#    #+#                 */
/*   Updated: 2020/08/03 22:32:03 by joppe         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdio.h>
#include "canvas.h"
#include "helpers/ft_str.h"

int		main(int argc, char **argv)
{
	char	*filename;

	t_wp wp;
	filename = "maps/example_file";
	if (!is_valid_workplace(filename, &wp))
	{
		ft_putstr("map error\n");
	}
	(void)argc;
	(void)argv;
	dealloc_workplace(&wp);
	return (0);
}

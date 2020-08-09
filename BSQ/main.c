/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: jkoers <jkoers@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/27 15:06:10 by jkoers        #+#    #+#                 */
/*   Updated: 2020/08/03 23:14:44 by joppe         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdio.h>
#include "canvas.h"
#include "helpers/ft_str.h"

char	*get_filename(int argc, char **argv)
{
	char *filename;

	if (argc == 1)
		filename = "maps/example_file";
	else if (argc == 2)
		filename = argv[1];
	else
		filename = NULL;

	return (filename);
}

int		main(int argc, char **argv)
{
	char	*filename;

	t_wp wp;
	filename = get_filename(argc, argv);
	if (!is_valid_workplace(filename, &wp))
	{
		ft_putstr("map error\n");
	}
	(void)argc;
	(void)argv;
	dealloc_workplace(&wp);
	return (0);
}

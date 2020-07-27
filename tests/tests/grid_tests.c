/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   grid_tests.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jkoers <jkoers@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/24 16:23:53 by jkoers        #+#    #+#                 */
/*   Updated: 2020/07/24 18:51:41 by jkoers        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdio.h>
#include "../grid.h"

int		main(void)
{
	char			*filename = "example_file";


	char			empty;
	char			obstacle;
	char			full;
	get_legend(filename, &empty, &obstacle, &full);
	printf("empty    <%c>\n", empty);
	printf("obstacle <%c>\n", obstacle);
	printf("full     <%c>\n", full);


	unsigned int	x_size;
	unsigned int	y_size;
	get_size(filename, &x_size, &y_size);
	printf("x_size    %d \n", x_size);
	printf("y_size    %d \n", y_size);


	char **grid = get_grid(filename);
	write_grid(1, grid, y_size);
	return (0);
}

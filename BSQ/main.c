/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: jkoers <jkoers@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/27 15:06:10 by jkoers        #+#    #+#                 */
/*   Updated: 2020/07/27 16:02:48 by jkoers        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdio.h>
#include "grid.h"

int		main(void)
{
	char			*filename = "example_file";


	char	rules[3];
	get_legend(filename, rules, rules + 1, rules + 2);
	printf("empty    <%c>\n", rules[0]);
	printf("obstacle <%c>\n", rules[1]);
	printf("full     <%c>\n", rules[2]);


	unsigned int	x_size;
	unsigned int	y_size;
	get_size(filename, &x_size, &y_size);
	printf("x_size    %d \n", x_size);
	printf("y_size    %d \n", y_size);


	char **grid = get_grid(filename);
	write_grid(1, grid, y_size);
	return (0);
}

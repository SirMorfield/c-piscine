/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   grid.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: jkoers <jkoers@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/24 15:27:09 by jkoers        #+#    #+#                 */
/*   Updated: 2020/07/27 16:06:01 by jkoers        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include "ft_atoi.h"

void	goto_start_map(int fd)
{
	char tmp;

	read(fd, &tmp, 1);
	while (tmp != '\n')
		read(fd, &tmp, 1);
}

void	get_legend(char *filename, char *empty, char *obstacle, char *full)
{
	int				fd;
	char			buf[420];
	unsigned int	i;

	fd = open(filename, O_RDONLY);
	read(fd, buf, 420);
	i = 0;
	while (buf[i] != '\n')
		i++;
	*empty = buf[i - 3];
	*obstacle = buf[i - 2];
	*full = buf[i - 1];
	close(fd);
}

void	get_size(char *filename, unsigned int *x_size, unsigned int *y_size)
{
	int				fd;
	unsigned int	i;
	int				start;
	char			buf[420000];

	fd = open(filename, O_RDONLY);
	i = 0;
	start = -1;
	read(fd, buf, 420000);
	*y_size = (unsigned int)ft_atoi(buf);
	while (1)
	{
		if (buf[i] == '\n')
		{
			if (start == -1)
				start = i;
			else
				break ;
		}
		i++;
	}
	*x_size = ((int)i - start) - 1;
	close(fd);
}

char	**get_grid(char *filename)
{
	unsigned int	i;
	int				fd;
	unsigned int	x_size;
	unsigned int	y_size;
	char			**result;

	i = 0;
	fd = open(filename, O_RDONLY);
	get_size(filename, &x_size, &y_size);
	result = malloc(y_size * sizeof(char*));
	goto_start_map(fd);
	while (i < y_size)
	{
		result[i] = malloc((x_size + 1) * sizeof(char));
		read(fd, result[i], x_size + 1);
		result[i][x_size] = '\0';
		i++;
	}
	close(fd);
	return (result);
}

void	write_grid(int fd, char **grid, unsigned int y_size)
{
	unsigned int i;
	unsigned int str_i;

	i = 0;
	str_i = 0;
	while (i < y_size)
	{
		str_i = 0;
		while (grid[i][str_i] != '\0')
		{
			write(fd, grid[i] + str_i, 1);
			str_i++;
		}
		write(fd, "\n", 1);
		i++;
	}
}

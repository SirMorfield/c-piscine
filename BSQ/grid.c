/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   grid.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: jkoers <jkoers@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/24 15:27:09 by jkoers        #+#    #+#                 */
/*   Updated: 2020/07/24 18:28:56 by jkoers        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

void	offset_read(int fd, unsigned int n)
{
	char tmp[n];

	read(fd, tmp, n);
}

void	get_legend(char *filename, char *empty, char *obstacle, char *full)
{
	int		fd;
	char	buf[4];

	fd = open(filename, O_RDONLY);
	read(fd, buf, 4);
	*empty = buf[1];
	*obstacle = buf[2];
	*full = buf[3];
	close(fd);
}

void	get_size(char *filename, unsigned int *x_size, unsigned int *y_size)
{
	int				fd;
	unsigned int	i;
	int				start;
	char			buf[420];

	fd = open(filename, O_RDONLY);
	i = 0;
	start = -1;
	read(fd, buf, 420);
	*y_size = (unsigned int)(buf[0] - 48);
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
	offset_read(fd, 5);
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

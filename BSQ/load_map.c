/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   load_map.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: jkoers <jkoers@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/24 15:27:09 by jkoers        #+#    #+#                 */
/*   Updated: 2020/07/27 21:12:40 by joppe         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include "ft_helpers.h"
#include "matrix_memory.h"

void	read_until_newline(int fd)
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

char	**load_map(char *filename)
{
	unsigned int	i;
	int				fd;
	unsigned int	x_size;
	unsigned int	y_size;
	char			**result;

	i = 0;
	fd = open(filename, O_RDONLY);
	get_size(filename, &x_size, &y_size);
	result = malloc_matrix(x_size, y_size);
	read_until_newline(fd);
	while (i < y_size)
	{
		read(fd, result[i], x_size);
		read_until_newline(fd);
		i++;
	}
	close(fd);
	return (result);
}

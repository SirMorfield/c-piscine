/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_file.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: joppe <joppe@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/29 15:13:01 by joppe         #+#    #+#                 */
/*   Updated: 2020/08/23 23:00:19 by joppe         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "ft_file.h"
#include "ft_memory.h"
#include "ft_string.h"
#include "types.h"

char	*read_until_end(int fd, const int block_size)
{
	int		bytes_read;
	int64_t	total_read;
	char	*buf;

	buf = NULL;
	bytes_read = block_size;
	total_read = 0;
	while (bytes_read == block_size)
	{
		buf = ft_realloc(buf, total_read, (total_read + block_size + 1) * sizeof(char));
		if (buf == NULL)
			break ;
		bytes_read = read(fd, buf + total_read, block_size);
		if (bytes_read == -1)
		{
			free(buf);
			buf = NULL;
			break ;
		}
		total_read += bytes_read;
	}
	if (buf != NULL)
		buf[total_read] = '\0';
	return (buf);
}

char	*ft_read_file(char *filename)
{
	const int	block_size = 327680;
	int 		fd;
	char		*buf;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (NULL);
	buf = read_until_end(fd, block_size);
	close(fd);
	return (buf);
}

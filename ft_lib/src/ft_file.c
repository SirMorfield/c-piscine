/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_file.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: joppe <joppe@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/29 15:13:01 by joppe         #+#    #+#                 */
/*   Updated: 2020/09/10 23:13:29 by joppe         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "ft_file.h"
#include "ft_memory.h"
#include "ft_string.h"
#include "types.h"

char	*read_until_end(int32_t fd, uint64_t block_size)
{
	int64_t		bytes_read;
	uint64_t	total_read;
	char		*buf;

	buf = NULL;
	bytes_read = block_size;
	total_read = 0;
	while (bytes_read == (int64_t)block_size)
	{
		block_size *= 2;
		buf = ft_realloc(buf, total_read, (total_read + block_size + 1) * sizeof(char));
		if (buf == NULL)
			break ;
		bytes_read = read(fd, buf + total_read, block_size);
		if (bytes_read == -1)
		{
			free(buf);
			return (NULL);
		}
		total_read += bytes_read;
	}
	buf[total_read] = '\0';
	return (buf);
}

char	*ft_read_file(char *filename)
{
	uint64_t	block_size = 4096;
	int32_t 	fd;
	char		*buf;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (NULL);
	buf = read_until_end(fd, block_size);
	close(fd);
	return (buf);
}

char	**ft_split_file(char *filename, char *seperator)
{
	char	*file;
	char	**split;

	file = ft_read_file(filename);
	if (file == NULL)
		return (NULL);
	split = ft_split(file, seperator);
	free(file);
	return (split);
}

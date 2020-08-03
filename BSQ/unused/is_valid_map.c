/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   is_valid_map.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: joppe <joppe@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/29 14:27:55 by joppe         #+#    #+#                 */
/*   Updated: 2020/07/29 19:03:21 by joppe         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include "ft_helpers.h"
#include "load_map.h"

char *read_map(char *filename)
{
	int			fd;
	char		*map;
	uint16_t	filesize;

	filesize = get_filesize(filename);
	if (filesize < 7)
		return (NULL);
	map = malloc((filesize + 1) * sizeof(char));
	fd = open(filename, O_RDONLY);
	read(fd, map, filesize);
	map[filesize] = '\0';
	close(fd);
	return (map);
}

int	has_invalid_obstacles(char *map, uint16_t filesize)
{
	char		*buf;
	int			fd;
	uint16_t	i;
	char		allowed[5];
	uint16_t	newlines;

	get_legend(filename, allowed[0], allowed[1], allowed[2]);
	allowed[3] = '\0';
	if (contains_duplicates(allowed))
		return (1);
	while (buf[i] != '\n')
		i++;
	newlines = 0;
	while (buf[i] != '\0')
	{
		if (!contains(buf[i], allowed))
			if (buf[i] == '\n')
				newlines++;
			else
				return (1);
		i++;
	}
	return (0);
}

char *read_map_if_valid(char *filename)
{
	uint16_t	i;
	char		*map;

	map = read_map(filename);
	if (map == NULL)
		return (NULL);
	i = 0;
	while (is_number(buf[i]) && buf[i + 3] != '\n' && i < 996)
		i++:
	if (i == 0)
		return (NULL);
	if (buf[i + 3] != '\n')
		return (NULL);
	if (has_invalid_obstacles(filename, filesize))
		return (NULL);
	return (1);
}

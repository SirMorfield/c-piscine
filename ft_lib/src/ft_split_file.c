/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split_file.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: joppe <joppe@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/28 22:13:09 by joppe         #+#    #+#                 */
/*   Updated: 2020/09/28 22:13:39 by joppe         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_file.h"
#include <unistd.h>

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

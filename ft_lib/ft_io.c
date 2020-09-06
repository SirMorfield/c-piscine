/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_io.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: joppe <joppe@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/15 22:48:23 by joppe         #+#    #+#                 */
/*   Updated: 2020/09/05 00:44:20 by joppe         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "types.h"
#include "ft_int.h"

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
}

void	write_str(int32_t fd, char *str)
{
	while (*str != '\0')
	{
		write(fd, str, 1);
		str++;
	}
}

void	write_matrix(int32_t fd, char **grid, uint64_t x_size, uint64_t y_size)
{
	uint64_t y_i;

	y_i = 0;
	while (y_i < y_size)
	{
		write(fd, grid[y_i], x_size);
		write(fd, "\n", 1);
		y_i++;
	}
}

void	write_uint64_arr(int32_t fd, uint64_t *arr, uint64_t len)
{
	uint64_t	i;
	char		*str;

	i = 0;
	write_str(fd, "{");
	while (i < len)
	{
		str = ui_to_str(arr[i]);
		write_str(fd, str);
		free(str);
		if (i != len - 1)
			write_str(fd, ", ");
		i++;
	}
	write_str(fd, "}\n");
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_ten_queens_puzzle.c                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: joppe <joppe@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/26 22:53:14 by joppe         #+#    #+#                 */
/*   Updated: 2020/09/05 00:51:40 by joppe         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdint.h>
#include <stdbool.h>

#define Y_SIZE 10
#define X_SIZE 10

void		print_uint64_arr(uint64_t *arr, uint64_t len)
{
	uint64_t i;

	if (len == 0)
		return ;
	i = 0;
	write(1, "{", 1);
	while (i < len)
	{

		i++;
	}
	write(1, "}", 1);
}

uint64_t	delta(uint64_t a, uint64_t b)
{
	if (a > b)
		return (a - b);
	else
		return (b - a);
}

bool	good_diagonal(uint64_t *line, uint64_t line_len)
{
	uint64_t i;

	i = 1;
	while (line_len - i - 1 >= 0)
	{
		if (delta(line[line_len - i - 1], line[line_len - 1]) == i)
			return (false);
		i++;
	}
	return (true);
}

bool	good_vertical(uint64_t *line, uint64_t line_len)
{
	uint64_t i;

	i = 0;
	while (i + 1 < line_len)
	{
		if (line[i] == line[line_len - 1])
			return (false);
	}
	return (true);
}

void	row(uint64_t *line, uint64_t line_len)
{
	int64_t x;

	x = 0;
	while (x < X_SIZE)
	{
		line[line_len] = x;
		if (good_diaganal(line, line_len + 1) &&  good_vertical(line, line_len + 1))
		{
			row(line, line_len + 1);
			printf()
		}
		x++;
	}
}


int		ft_ten_queens_puzzle(void)
{
	int64_t restult[Y_SIZE];

}
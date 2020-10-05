/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_ten_queens_puzzle.c                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: joppe <joppe@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/26 22:53:14 by joppe         #+#    #+#                 */
/*   Updated: 2020/10/04 20:17:18 by joppe         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdint.h>
#include <stdbool.h>

#define MAX_LINE_LEN 10

bool	good_diagonal(char *line, int len)
{
	int		i;
	char	lastC;

	lastC = line[len - 1];
	i = 0;
	while (i < len - 1)
	{
		if (line[i] == lastC + (len - i - 1))
			return (false);
		if (line[i] == lastC - (len - i - 1))
			return (false);
		i++;
	}
	return (true);
}

bool	good_vertical(char *line, int len)
{
	int i;

	i = 0;
	while (i < len - 1)
	{
		if (line[i] == line[len - 1])
			return (false);
		i++;
	}
	return (true);
}

void	row(char *line, int len, int *permutations)
{
	char c;

	c = '0';
	while (c <= '9')
	{
		line[len] = c;
		if (
			good_vertical(line, len + 1) &&
			good_diagonal(line, len + 1)
		) {
			if (len + 1 == MAX_LINE_LEN)
			{
				write(1, line, MAX_LINE_LEN);
				write(1,"\n", 1);
				(*permutations)++;
			}
			else
				row(line, len + 1, permutations);
		}
		c++;
	}
}

int		ft_ten_queens_puzzle(void)
{
	char	line[MAX_LINE_LEN];
	int		permutations;

	permutations = 0;
	row(line, 0, &permutations);
	return (permutations);
}

#include <stdio.h>

int		main(void)
{
	printf("%i combinations\n", ft_ten_queens_puzzle());
	return (0);
}

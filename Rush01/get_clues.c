/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   get_clues.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: jkoers <jkoers@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/19 16:26:07 by jkoers        #+#    #+#                 */
/*   Updated: 2020/07/19 17:13:01 by jkoers        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	**alloc_matrix(unsigned int x_size, unsigned int y_size)
{
	unsigned int	i;
	char			**matrix;

	i = 0;
	matrix = malloc(y_size * sizeof(char*));
	while (i < y_size)
	{
		*(matrix + i) = malloc(x_size * sizeof(char));
		i++;
	}
	return (matrix);
}

char	**get_row_clues(char *input)
{
	int		y;
	int		x;
	char	**clues;
	int		i;

	i = 16;
	y = 0;
	x = 0;
	clues = alloc_matrix(2, 4);
	while (1)
	{
		clues[y][x] = input[i];
		y++;
		if (y == 4)
		{
			if (x == 1)
				break ;
			y = 0;
			x = 1;
		}
		i += 2;
	}
	return (clues);
}

char	**get_column_clues(char *input)
{
	int		y;
	int		x;
	char	**clues;
	int		i;

	i = 0;
	y = 0;
	x = 0;
	clues = alloc_matrix(4, 2);
	while (1)
	{
		clues[y][x] = input[i];
		x++;
		if (x == 4)
		{
			if (y == 1)
				break ;
			x = 0;
			y = 1;
		}
		i += 2;
	}
	return (clues);
}

// x = 0;
// y = 0;
// while (y < 4)
// {
// 	x = 0;
// 	while (x < 2)
// 	{
// 		printf("%c ", clues[y][x]);
// 		x++;
// 	}
// 	y++;
// 	printf("\n");
// }

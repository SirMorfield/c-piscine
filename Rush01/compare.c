/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   compare.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: jkoers <jkoers@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/19 17:27:47 by jkoers        #+#    #+#                 */
/*   Updated: 2020/07/19 18:49:22 by jkoers        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char g_sol[24][6] = {
	{ '4', '1', '2', '3'},
	{ '4', '2', '1', '3'},
	{ '4', '1', '3', '2'},
	{ '4', '2', '3', '1'},
	{ '4', '3', '1', '2'},
	{ '4', '3', '2', '1'},
	{ '3', '2', '1', '4'},
	{ '1', '4', '2', '3'},
	{ '2', '1', '4', '3'},
	{ '2', '4', '1', '3'},
	{ '3', '1', '4', '2'},
	{ '3', '2', '4', '1'},
	{ '3', '4', '1', '2'},
	{ '1', '4', '3', '2'},
	{ '2', '4', '3', '1'},
	{ '3', '4', '2', '1'},
	{ '3', '1', '2', '4'},
	{ '2', '3', '1', '4'},
	{ '1', '3', '2', '4'},
	{ '2', '1', '3', '4'},
	{ '1', '2', '4', '3'},
	{ '1', '3', '4', '2'},
	{ '2', '3', '4', '1'},
	{ '1', '2', '3', '4'}
};

char g_awnsers[24][2] = {
	{'1', '2'},
	{'1', '2'},
	{'1', '3'},
	{'1', '3'},
	{'1', '3'},
	{'1', '4'},
	{'2', '1'},
	{'2', '2'},
	{'2', '2'},
	{'2', '2'},
	{'2', '2'},
	{'2', '2'},
	{'2', '2'},
	{'2', '3'},
	{'2', '3'},
	{'2', '3'},
	{'2', '4'},
	{'3', '1'},
	{'3', '1'},
	{'3', '1'},
	{'3', '2'},
	{'3', '2'},
	{'3', '2'},
	{'4', '1'}
};

void	get_range(char rule1, char rule2, unsigned int *start, unsigned int *n)
{
	unsigned int i;

	i = 0;
	while (g_awnsers[i][0] != rule1)
		i++;
	*start = i;
	while (g_awnsers[i][1] == rule2)
		i++;
	*n = i;
}

void	compare(char **row_clues, char **column_clues)
{
	unsigned int range_start;
	unsigned int n;
	unsigned int i;

	get_range(row_clues[0][0], row_clues[0][1], &range_start, &n);
	while (i < 4)
	{
		
		range_start++;
	}
}

int main()
{
	unsigned int start;
	unsigned int end;

	get_range('1', '2', &start, &end);
	printf("%d %d", start, end);
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_ultimate_range.c                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: joppe <joppe@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/20 20:01:04 by joppe         #+#    #+#                 */
/*   Updated: 2020/07/20 20:08:01 by joppe         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int ft_ultimate_range(int **range, int min, int max)
{
	int i;
	int size;
	int *tab;

	size = max - min;
	i = 0;
	if (size <= 0)
	{
		*range = NULL;
		return (0);
	}
	tab = malloc(size * sizeof(*range));
	if (tab == NULL)
		return (-1);
	while (min < max)
	{
		tab[i] = min;
		i++;
		min++;
	}
	*range = tab;
	return (size);
}
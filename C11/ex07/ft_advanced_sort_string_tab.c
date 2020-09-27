/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_advanced_sort_string_tab.c                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: joppe <joppe@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/28 00:04:20 by joppe         #+#    #+#                 */
/*   Updated: 2020/09/28 00:04:21 by joppe         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>

void	ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char *))
{
	int		i;
	int		size;
	bool	done;
	char	*temp;

	size = 0;
	while (tab[size])
		size++;
	done = false;
	while (!done)
	{
		i = 0;
		done = true;
		while (i < size - 1)
		{
			if ((*cmp)(tab[i], tab[i + 1]) > 0)
			{
				temp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = temp;
				done = false;
			}
			i++;
		}
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_array.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: joppe <joppe@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/15 22:57:36 by joppe         #+#    #+#                 */
/*   Updated: 2020/08/15 22:57:58 by joppe         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int temp;
	int left_i;
	int right_i;

	if (size <= 1)
		return ;
	left_i = 0;
	right_i = size - 1;
	while (left_i < right_i)
	{
		temp = tab[left_i];
		tab[left_i] = tab[right_i];
		tab[right_i] = temp;
		left_i++;
		right_i--;
	}
}

void	ft_sort_int_tab(int *tab, int size)
{
	int			tmp;
	long long	i;
	long long	j;

	if (size <= 1)
		return ;
	while (i < size)
	{
		while (j < size)
		{
			if (tab[j] > tab[i])
			{
				tmp = tab[i];
				tab[i] = tab[j];
				tab[j] = tmp;
			}
			j++;
		}
		i++;
	}
}
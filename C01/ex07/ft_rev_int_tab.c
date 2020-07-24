/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_rev_int_tab.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: jkoers <jkoers@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/12 11:37:41 by jkoers        #+#    #+#                 */
/*   Updated: 2020/07/12 12:03:18 by jkoers        ########   odam.nl         */
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

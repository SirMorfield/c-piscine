/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_is_sort.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: joppe <joppe@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/27 23:34:27 by joppe         #+#    #+#                 */
/*   Updated: 2020/09/27 23:36:31 by joppe         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int		i;

	i = 0;
	while (i < length - 1)
	{
		if ((*f)(tab[i], tab[i + 1]) > 0)
			return (0);
		i++;
	}
	return (1);
}

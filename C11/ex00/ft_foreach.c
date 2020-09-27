/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_foreach.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: joppe <joppe@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/21 23:25:08 by joppe         #+#    #+#                 */
/*   Updated: 2020/09/27 23:36:35 by joppe         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

void    ft_foreach(int* tab, int length, void (*f)(int))
{
	int i;

	if (length <= 0)
		return;
  	i = 0;
	while (i < length)
	{
		(*f)(tab[i]);
		i++;
	}
}

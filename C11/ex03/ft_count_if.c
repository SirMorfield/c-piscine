/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_count_if.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: joppe <joppe@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/21 23:25:35 by joppe         #+#    #+#                 */
/*   Updated: 2020/09/24 23:59:43 by joppe         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int		ft_count_if(char **tab, int length, int (*f)(char*))
{
	int		i;
	int		n;

	i = 0;
	n = 0;
	while (i < length)
	{
		if ((*f)(tab[i]) != 0)
			n++;
		i++;
	}
	return (n);
}

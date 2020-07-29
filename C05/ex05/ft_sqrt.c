/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_sqrt.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: jkoers <jkoers@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/17 17:06:39 by jkoers        #+#    #+#                 */
/*   Updated: 2020/07/29 13:51:12 by jkoers        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int i;

	i = 0;
	if (nb > 0)
	{
		while (i < 46432)
		{
			if (i * i == nb)
				return (i);
			i++;
		}
	}
	return (0);
}

/*
** #include <stdio.h>
**
** int main()
** {
** 	printf("%d", ft_sqrt(25));
** 	return (0);
** }
*/

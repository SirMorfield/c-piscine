/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strupcase.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: jkoers <jkoers@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/12 20:19:27 by jkoers        #+#    #+#                 */
/*   Updated: 2020/07/22 14:30:38 by jkoers        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	unsigned long i;

	i = 0;
	if (!str)
		return (str);
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' &&
			str[i] <= 'z')
			str[i] -= 32;
		i++;
	}
	return (str);
}

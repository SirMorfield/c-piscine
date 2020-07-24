/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlowcase.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: jkoers <jkoers@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/12 20:24:53 by jkoers        #+#    #+#                 */
/*   Updated: 2020/07/22 14:29:44 by jkoers        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	unsigned long i;

	i = 0;
	if (!str)
		return (str);
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' &&
			str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}

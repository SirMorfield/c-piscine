/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_stringcmp.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: joppe <joppe@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/23 00:43:03 by joppe         #+#    #+#                 */
/*   Updated: 2020/08/23 00:43:03 by joppe         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

int		ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;

	i = 0;
	while (1)
	{
		if (s1[i] && s2[i] && (s1[i] == s2[i]))
			i++;
		else
			break ;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (i < (n - 1))
	{
		if (s1[i] && s2[i] && (s1[i] == s2[i]))
			i++;
		else
			break ;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

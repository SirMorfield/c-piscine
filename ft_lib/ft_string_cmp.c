/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_string_cmp.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: joppe <joppe@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/23 00:43:03 by joppe         #+#    #+#                 */
/*   Updated: 2020/08/24 19:55:04 by joppe         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"
#include "types.h"

int8_t	ft_strcmp(char *s1, char *s2)
{
	while (*s1 != '\0')
	{
		if (*s1 != *s2)
			break ;
		s1++;
		s2++;
	}
	return ((unsigned char)(*s1) - (unsigned char)(*s2));
}

int8_t	ft_strncmp(char *s1, char *s2, uint64_t n)
{
	uint64_t	i;

	if (n == 0)
		return (0);
	i = 0;
	n -= 1;
	while (i < n)
	{
		if (s1[i] == '\0' || s1[i] != s2[i])
			break ;
		i++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
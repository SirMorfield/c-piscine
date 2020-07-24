/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strstr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: gvan-wou <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/12 15:20:19 by gvan-wou      #+#    #+#                 */
/*   Updated: 2020/07/23 10:45:00 by jkoers        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	j = 0;
	if (!to_find || to_find[0] == '\0')
		return (str);
	while (str[j] != '\0')
	{
		i = 0;
		while (str[j] == to_find[i])
		{
			j++;
			i++;
			if (to_find[i] == '\0')
				return (str + j - i);
		}
		j++;
	}
	return ((char *)0);
}

#include <stdio.h>

int main()
{
	char *str = "aaaaa112aaa123aaa";
	char *to_find = NULL;
	printf("%s", ft_strstr(str, to_find));
}
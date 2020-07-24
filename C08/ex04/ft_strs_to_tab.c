/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strs_to_tab.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: jkoers <jkoers@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/24 14:44:35 by jkoers        #+#    #+#                 */
/*   Updated: 2020/07/24 14:46:22 by jkoers        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_strs_to_tab.h"
#include <stdlib.h>
#include <stdio.h>
​
int		ft_strlen(char *str)
{
	int length;
​
	length = 0;
	while (str[length] != '\0')
		length++;
	return (length);
}
​
char	*ft_strcpy(char *dest, char *src)
{
	int index;
​
	index = 0;
	while (src[index] != '\0')
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	return (dest);
}
​
struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*strs;
	int			index;
​
	strs = malloc(ac * sizeof(t_stock_str));
	index = 0;
	while (index < ac)
	{
		strs[index].size = ft_strlen(av[index]);
		strs[index].str = av[index];
		strs[index].copy = malloc(strs[index].size);
		ft_strcpy(strs[index].copy, av[index]);
		index++;
	}
	return (strs);
}
​
int		main(void)
{
	t_stock_str		*strs;
	char			*strings[3];
​
	strings[0] = "1234";
	strings[1] = "4321";
	strings[2] = "abcdefgh";
	strs = ft_strs_to_tab(3, strings);
	printf("%d | %s", strs[1].size, strs[1].copy);
}
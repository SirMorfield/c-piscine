/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strstr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: jkoers <jkoers@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/14 13:14:09 by jkoers        #+#    #+#                 */
/*   Updated: 2020/07/23 12:57:05 by jkoers        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	str_i;
	int	to_find_i;

	str_i = 0;
	if (!to_find || to_find[0] == '\0')
		return (str);
	while (str[str_i] != '\0')
	{
		to_find_i = 0;
		while (str[str_i + to_find_i] == to_find[to_find_i])
		{
			if (to_find[to_find_i + 1] == '\0')
				return (str);
			to_find_i++;
		}
		str_i++;
	}
	return ((char *)0);
}

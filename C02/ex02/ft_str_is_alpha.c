/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_str_is_alpha.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: jkoers <jkoers@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/12 14:56:16 by jkoers        #+#    #+#                 */
/*   Updated: 2020/07/22 16:04:57 by jkoers        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	if (!str)
		return (1);
	while (*str != '\0')
	{
		if (*str < 'A')
			return (0);
		if (*str > 'Z' && *str < 'a')
			return (0);
		if (*str > 'z')
			return (0);
		str++;
	}
	return (1);
}

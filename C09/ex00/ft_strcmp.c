/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strcmp.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: jkoers <jkoers@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/14 10:18:23 by jkoers        #+#    #+#                 */
/*   Updated: 2020/09/11 15:13:36 by joppe         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, uint64_t n)
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

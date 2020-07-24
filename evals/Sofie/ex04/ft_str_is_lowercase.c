/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_str_is_lowercase.c                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: sgloudem <sgloudem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/23 11:18:38 by sgloudem      #+#    #+#                 */
/*   Updated: 2020/07/23 11:37:09 by sgloudem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_lowercase(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			i++;
		}
		else
		{
			i++;
			return (0);
		}
	return (1);
}

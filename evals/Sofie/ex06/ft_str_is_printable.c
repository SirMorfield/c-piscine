/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_str_is_printable.c                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: sgloudem <sgloudem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/23 11:50:01 by sgloudem      #+#    #+#                 */
/*   Updated: 2020/07/23 11:52:59 by sgloudem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_printable(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		if (str[i] >= 32 && str[i] <= 126)
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

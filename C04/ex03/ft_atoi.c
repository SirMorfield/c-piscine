/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: jkoers <jkoers@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/14 19:09:48 by jkoers        #+#    #+#                 */
/*   Updated: 2020/07/15 18:16:59 by jkoers        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	unsigned long	i;
	int				result;
	int				start;

	i = 0;
	result = 0;
	start = -1;
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			result *= 10;
			result += (int)(str[i] - '0');
			if (start == -1)
				start = i;
		}
		else if (start != -1)
			break ;
		i++;
	}
	if (start > 0 && str[start - 1] == '-')
		return (-result);
	return (result);
}

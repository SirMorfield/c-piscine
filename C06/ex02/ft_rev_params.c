/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_rev_params.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: joppe <joppe@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/20 13:35:33 by joppe         #+#    #+#                 */
/*   Updated: 2020/07/28 17:27:38 by jkoers        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

int	main(int argc, char **argv)
{
	while (argc > 1)
	{
		argc--;
		write(1, argv[argc], ft_strlen(argv[argc]));
		write(1, "\n", 1);
	}
}

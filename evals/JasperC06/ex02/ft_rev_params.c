/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_rev_params.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: jsimonis <jsimonis@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/22 15:36:47 by jsimonis      #+#    #+#                 */
/*   Updated: 2020/07/24 15:42:02 by jsimonis      ########   odam.nl         */
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

int	main(int argc, char *argv[])
{
	while (argc > 1)
	{
		argc--;
		write(1, argv[argc], ft_strlen(argv[argc]));
		write(1, "\n", 1);
	}
}

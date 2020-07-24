/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: sgloudem <sgloudem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/23 12:59:06 by sgloudem      #+#    #+#                 */
/*   Updated: 2020/07/23 12:59:24 by sgloudem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str);

int		main(void)
{ 	
	char c[] = "cCc";

	printf("%s", ft_strlowcase(c));
	
	return (0);
}
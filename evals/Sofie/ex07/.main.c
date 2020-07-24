/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: sgloudem <sgloudem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/23 11:58:27 by sgloudem      #+#    #+#                 */
/*   Updated: 2020/07/23 12:55:51 by sgloudem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str);

int		main(void)
{ 	
	char c[] = "ccc";

	printf("%s", ft_strupcase(c));
	
	return (0);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: sgloudem <sgloudem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/22 13:16:20 by sgloudem      #+#    #+#                 */
/*   Updated: 2020/07/23 10:45:33 by sgloudem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str);

int main(void)
{
	int l;

	l = ft_str_is_alpha("addj1hYGFJ");
	printf("%d", l);
}
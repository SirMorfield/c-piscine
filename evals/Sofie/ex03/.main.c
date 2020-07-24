/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: sgloudem <sgloudem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/23 11:11:27 by sgloudem      #+#    #+#                 */
/*   Updated: 2020/07/23 11:26:08 by sgloudem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_str_is_numeric(char *str);

int main(void)
{
	  int l;
	  
	  l = ft_str_is_numeric("1198");
	  printf("%d", l);
	   
}
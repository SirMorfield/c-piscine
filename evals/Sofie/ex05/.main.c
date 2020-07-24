/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: sgloudem <sgloudem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/23 11:39:17 by sgloudem      #+#    #+#                 */
/*   Updated: 2020/07/23 11:40:20 by sgloudem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_str_is_uppercase(char *str);

int main(void)
{
	  int l;
	  
	  l = ft_str_is_uppercase("aaaa");
	  printf("%d", l);
	   
}
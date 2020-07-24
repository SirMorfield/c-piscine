/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: sgloudem <sgloudem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/23 11:52:03 by sgloudem      #+#    #+#                 */
/*   Updated: 2020/07/23 11:52:49 by sgloudem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_str_is_printable(char *str);

int main(void)
{
	  int l;
	  
	  l = ft_str_is_printable("\\\");
	  printf("%d", l);
	   
}
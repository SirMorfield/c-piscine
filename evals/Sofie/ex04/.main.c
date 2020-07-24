/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: sgloudem <sgloudem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/23 11:26:22 by sgloudem      #+#    #+#                 */
/*   Updated: 2020/07/23 11:26:58 by sgloudem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_str_is_lowercase(char *str);

int main(void)
{
	  int l;
	  
	  l = ft_str_is_lowercase("AAaa");
	  printf("%d", l);
	   
}
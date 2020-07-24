/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main01.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: sgloudem <sgloudem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/22 11:28:50 by sgloudem      #+#    #+#                 */
/*   Updated: 2020/07/22 11:34:14 by sgloudem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int	main()
{
	char	strncpy[] = "";
	char	str[12] = "I love cats";

	ft_strncpy(strncpy, str, 8);
	printf("This should read I love ca: %s\n", strncpy);
	return(0);
}
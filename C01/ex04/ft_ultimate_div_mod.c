/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_ultimate_div_mod.c                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: jkoers <jkoers@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/12 11:21:25 by jkoers        #+#    #+#                 */
/*   Updated: 2020/07/12 12:00:09 by jkoers        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int a_copy;

	a_copy = *a;
	*a = *a / *b;
	*b = a_copy % *b;
}

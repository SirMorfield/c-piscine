/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_list_reverse.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: joppe <joppe@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/05 23:26:35 by joppe         #+#    #+#                 */
/*   Updated: 2020/10/05 23:26:40 by joppe         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_reverse(t_list **begin_list)
{
	t_list	*next;
	t_list	*prev;
	t_list	*current;

	if (*begin_list == 0)
		return ;
	current = *begin_list;
	while (current != NULL)
	{
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}
	*begin_list = prev;
}

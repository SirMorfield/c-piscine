/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_list_merge.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: joppe <joppe@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/05 23:40:31 by joppe         #+#    #+#                 */
/*   Updated: 2020/10/08 16:00:38 by joppe         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_merge(t_list **begin_list1, t_list *begin_list2)
{
	t_list	*current;
	t_list	*previous;

	current = *begin_list1;
	while (current != 0)
	{
		previous = current;
		current = current->next;
	}
	previous->next = begin_list2;
}

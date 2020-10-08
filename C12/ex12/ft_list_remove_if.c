/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_list_remove_if.c                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: joppe <joppe@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/05 23:40:23 by joppe         #+#    #+#                 */
/*   Updated: 2020/10/08 16:00:16 by joppe         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "ft_list.h"

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)(),
							void (*free_fct)(void *))
{
	t_list	*removed;

	if (begin_list == 0 || (*begin_list)->next == 0)
		return ;
	if ((*cmp)((*begin_list)->next->data, data_ref) == 0)
	{
		removed = (*begin_list)->next;
		(*begin_list)->next = removed->next;
		(*free_fct)(removed->data);
		free(removed);
	}
	ft_list_remove_if(&(*begin_list)->next, data_ref, cmp, free_fct);
}

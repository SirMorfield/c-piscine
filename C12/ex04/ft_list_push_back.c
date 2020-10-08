/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_list_push_back.c                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: joppe <joppe@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/05 23:07:11 by joppe         #+#    #+#                 */
/*   Updated: 2020/10/05 23:32:09 by joppe         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*current;

	current = begin_list;
	while (current->next != 0)
		current = current->next;
	current->next = ft_create_elem(data);
}

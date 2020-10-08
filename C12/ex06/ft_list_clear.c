/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_list_clear.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: joppe <joppe@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/05 23:21:09 by joppe         #+#    #+#                 */
/*   Updated: 2020/10/05 23:35:57 by joppe         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_clear(t_list *begin_list, void (*free_fct)(void *))
{
	t_list	current;

	current = begin_list;
	while (current != 0)
	{
		(*free_fct)(current->data);
		current = current->next;
	}
	free(begin_list);
}

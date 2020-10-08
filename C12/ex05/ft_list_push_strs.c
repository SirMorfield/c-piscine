/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_list_push_strs.c                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: joppe <joppe@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/05 23:09:19 by joppe         #+#    #+#                 */
/*   Updated: 2020/10/05 23:34:27 by joppe         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_push_strs(int size, char **strs)
{
	t_list	*begin_list;
	t_list	*current;
	int		i;

	if (size == 0)
		return (0);
	begin_list = ft_create_elem((void *)strs[0]);
	current = begin_list->next;
	i = 1;
	while (i < size)
	{
		current = ft_create_elem((void *)strs[i]);
		current = current->next;
		i++;
	}
	return (begin_list);
}

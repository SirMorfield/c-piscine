/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_list_size.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: joppe <joppe@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/05 23:02:33 by joppe         #+#    #+#                 */
/*   Updated: 2020/10/05 23:31:07 by joppe         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int	ft_list_size(t_list *begin_list)
{
	t_list	*current;
	int		size;

	current = begin_list;
	size = 0;
	while (current != 0)
	{
		size++;
		current = current->next;
	}
	return (size);
}

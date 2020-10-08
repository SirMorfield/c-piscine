/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_list_at.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: joppe <joppe@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/05 23:26:03 by joppe         #+#    #+#                 */
/*   Updated: 2020/10/05 23:26:09 by joppe         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	t_list	current;

	current = begin_list;
	while (nbr > 0)
	{
		nbr--;
		current = current->next;
		if (current == 0)
			return (NULL);
	}
	return (current);
}

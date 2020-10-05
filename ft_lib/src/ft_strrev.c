/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strrev.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: joppe <joppe@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/07 13:57:16 by joppe         #+#    #+#                 */
/*   Updated: 2020/10/05 22:51:46 by joppe         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "types.h"
#include "ft_string.h"

void	ft_strrev(char *str)
{
	uint64_t len;

	len = ft_strlen(str);
	ft_strnrev(str, len);
}

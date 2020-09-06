/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memory.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: joppe <joppe@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/01 17:15:08 by joppe         #+#    #+#                 */
/*   Updated: 2020/08/24 14:59:31 by joppe         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_MEMORY
# define FT FT_MEMORY
# include "types.h"

void	*ft_memcpy(void *dest, void *src, uint64_t len);
void	*ft_realloc(void *ptr, uint64_t orig_len, uint64_t new_len);
void	ft_memset(void *s, uint8_t c, uint64_t n);

#endif
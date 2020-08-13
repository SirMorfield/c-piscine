/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_str.h                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: joppe <joppe@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/01 17:09:55 by joppe         #+#    #+#                 */
/*   Updated: 2020/08/13 22:27:58 by mraasvel      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STR_H
# define FT_STR_H
# include <stdint-gcc.h>

void	ft_putstr(char *str);
char	*ft_strncpy(char *dest, char *src, uint64_t n);
uint8_t	ft_contains_duplicates(char *str);
uint8_t	ft_contains(char c, char *str);
uint8_t	ft_is_space(char c);
uint8_t	ft_is_digit(char c);
uint8_t	ft_is_printable(char c);

#endif
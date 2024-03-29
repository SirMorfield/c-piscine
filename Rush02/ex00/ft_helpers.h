/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_helpers.h                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jkoers <jkoers@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/25 14:41:23 by jkoers        #+#    #+#                 */
/*   Updated: 2020/07/26 15:13:09 by ngerrets      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_HELPERS_H
# define FT_HELPERS_H

unsigned int	ft_strlen(char *str);
void			ft_putstr(char *str);
char			*ft_strncpy(char *dest, char *src, unsigned int n);
int				is_number(char c);

#endif

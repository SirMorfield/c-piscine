/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_helpers2.h                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: joppe <joppe@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/29 19:36:15 by joppe         #+#    #+#                 */
/*   Updated: 2020/07/31 23:01:42 by joppe         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_HELPERS2_H
# define FT_HELPERS2_H

int		ft_contains_duplicates(char *str);
int		ft_contains(char c, char *str);
void	ft_putstr(char *str);
int		ft_str_is_printable(char *str);
char	*ft_strncpy(char *dest, char *src, unsigned int n);

#endif
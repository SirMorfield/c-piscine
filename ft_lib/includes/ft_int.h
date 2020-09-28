/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_int.h                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: joppe <joppe@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/03 22:27:29 by joppe         #+#    #+#                 */
/*   Updated: 2020/09/05 00:40:21 by joppe         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_INT_H
# define FT_INT_H

uint64_t	ft_str_to_ui(char *str);
int64_t		ft_str_to_i(char *str);
char		*i_to_str(int64_t n);
char		*ui_to_str(uint64_t n);

#endif
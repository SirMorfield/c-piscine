/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   do_magic.h                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: ngerrets <ngerrets@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/26 15:30:32 by ngerrets      #+#    #+#                 */
/*   Updated: 2020/07/26 16:25:50 by ngerrets      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef DO_MAGIC_H
# define DO_MAGIC_H

# include "parse_dict.h"

int		find_and_put(t_name_rule *rules, char *input, int zeros);
void	do_magic(char *input, t_name_rule *rules);

#endif

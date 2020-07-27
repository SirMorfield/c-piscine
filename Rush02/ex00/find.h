/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   find.h                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: ngerrets <ngerrets@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/26 16:23:25 by ngerrets      #+#    #+#                 */
/*   Updated: 2020/07/26 16:25:32 by ngerrets      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIND_H
# define FIND_H

# include "parse_dict.h"

int		compare_number(char *string, char *number, unsigned int numl);
char	*generate_compare_number(char first_number, int zeros);
char	*find_in_dict(char *n, t_name_rule *rules);

#endif

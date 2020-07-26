/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   parse_dict.h                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jkoers <jkoers@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/25 14:21:17 by jkoers        #+#    #+#                 */
/*   Updated: 2020/07/26 12:26:53 by jkoers        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PARSE_DICT_H
# define PARSE_DICT_H

typedef struct	s_name_rule
{
	unsigned int	number_length;
	char			*number;
	char			*name;
}				t_name_rule;

t_name_rule		*parse_dict(char *filename, unsigned int *number_of_names);

#endif

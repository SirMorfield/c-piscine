/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   parse_dict.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jkoers <jkoers@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/25 14:21:15 by jkoers        #+#    #+#                 */
/*   Updated: 2020/07/26 14:34:42 by jkoers        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <stdio.h>
#include "parse_dict.h"
#include "ft_helpers.h"
#define MAX_FILE_SIZE 10485760

char		*read_dict(char *filename)
{
	char			*dict;
	int				fd;
	unsigned int	bytes_read;

	dict = malloc(MAX_FILE_SIZE);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		write(1, "error1\n", 7);
	bytes_read = read(fd, dict, MAX_FILE_SIZE);
	dict[bytes_read] = '\0';
	close(fd);
	return (dict);
}

void		match_rule(char *dict, unsigned int *start_i, unsigned int *end_i)
{
	unsigned int i;

	i = *start_i;
	if (dict[i] == '\0')
		return ;
	while (dict[i] != '\0' && !is_number(dict[i]))
		i++;
	*start_i = i;
	while (dict[i] != '\0' && is_number(dict[i]))
		i++;
	while (dict[i] != '\0' && dict[i] == ' ')
		i++;
	if (dict[i] == '\0')
	{
		*end_i = i;
		return ;
	}
	if (dict[i] == '\0' || dict[i] != ':')
	{
		i++;
		printf("expected \':\' got \'%c\'\n", dict[i]);
	}
	while (dict[i] != '\0' && dict[i] != '\n')
		i++;
	*end_i = i;
}

/*
**	>= n_rules alloc
*/

t_name_rule	*malloc_for_rules(char *dict, unsigned int *n_rules)
{
	t_name_rule		*rules = NULL;
	unsigned int	start_i;
	unsigned int	end_i;

	start_i = 0;
	*n_rules = 0;
	while (1)
	{
		match_rule(dict, &start_i, &end_i);
		if (dict[start_i] == '\0' || dict[end_i] == '\0')
			break ;
		*n_rules += 1;
		start_i = end_i;
	}
	rules = malloc(*n_rules * sizeof(t_name_rule));
	return (rules);
}

void		set_rule(t_name_rule *rule, char *str)
{
	unsigned int	i;

	i = 0;
	while (is_number(str[i]))
		i++;
	rule->number = malloc(i + 1);
	rule->number[i] = '\0';
	rule->number_length = i;
	ft_strncpy(rule->number, str, i);
	while (str[i] == ' ' || str[i] == ':')
		i++;
	str += i;
	i = 0;
	while (str[i] != '\n')
		i++;
	rule->name = malloc(i + 1);
	rule->name[i] = '\0';
	ft_strncpy(rule->name, str, i);
}

t_name_rule	*parse_dict(char *filename, unsigned int *number_of_rules)
{
	char			*dict = NULL;
	t_name_rule		*rules;
	unsigned int	start_i;
	unsigned int	end_i;
	unsigned int	rule_i;

	dict = read_dict(filename);
	rules = malloc_for_rules(dict, number_of_rules);
	start_i = 0;
	rule_i = 0;
	while (rule_i < *number_of_rules)
	{
		match_rule(dict, &start_i, &end_i);
		set_rule(rules + rule_i, dict + start_i);
		start_i = end_i + 1;
		rule_i++;
	}
	free(dict);
	return (rules);
}

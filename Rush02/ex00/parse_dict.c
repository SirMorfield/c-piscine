/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   parse_dict.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jkoers <jkoers@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/25 14:21:15 by jkoers        #+#    #+#                 */
/*   Updated: 2020/07/26 19:37:19 by jkoers        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include "parse_dict.h"
#include "ft_helpers.h"
#define MAX_FILE_SIZE 10485760

char		*read_dict(char *filename)
{
	char			*dict;
	int				fd;
	unsigned int	bytes_read;

	if (!filename)
		return (NULL);
	dict = malloc(MAX_FILE_SIZE);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (NULL);
	bytes_read = read(fd, dict, MAX_FILE_SIZE);
	dict[bytes_read] = '\0';
	close(fd);
	if (bytes_read < 4)
		return (NULL);
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
	if (dict[i] == '\0' || dict[i] != ':')
	{
		*start_i = i;
		match_rule(dict, start_i, end_i);
		return ;
	}
	while (dict[i] != '\0' && dict[i] != '\n')
		i++;
	*end_i = i;
}

t_name_rule	*malloc_for_rules(char *dict, unsigned int *n_rules)
{
	t_name_rule		*rules;
	unsigned int	start_i;
	unsigned int	end_i;

	rules = 0;
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
	rules = malloc((*n_rules + 1) * sizeof(t_name_rule));
	rules[*n_rules].number = NULL;
	rules[*n_rules].number_length = 0;
	rules[*n_rules].name = NULL;
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

t_name_rule	*parse_dict(char *filename)
{
	char			*dict;
	t_name_rule		*rules;
	unsigned int	start_i;
	unsigned int	end_i;
	unsigned int	number_of_rules;

	dict = NULL;
	dict = read_dict(filename);
	if (dict == NULL)
		return (NULL);
	rules = malloc_for_rules(dict, &number_of_rules);
	if (number_of_rules == 0)
		return (NULL);
	start_i = 0;
	while (number_of_rules > 0)
	{
		number_of_rules--;
		match_rule(dict, &start_i, &end_i);
		set_rule(rules + number_of_rules, dict + start_i);
		start_i = end_i + 1;
	}
	free(dict);
	return (rules);
}

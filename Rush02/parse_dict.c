/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   parse_dict.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jkoers <jkoers@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/25 14:21:15 by jkoers        #+#    #+#                 */
/*   Updated: 2020/07/25 22:50:10 by joppe         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <stdio.h>
#include "parse_dict.h"
#include "ft_helpers.h"
#define MAX_FILE_SIZE 1048576

unsigned int	get_num_of_rules(char *dict)
{
	unsigned int	n_lines;

	n_lines = 0;
	while (*dict != '\0')
	{
		if (*dict == '\n')
			n_lines++;
		dict++;
	}
	return (n_lines);
}

char			*read_dict(char *filename)
{
	char			*dict;
	int				fd;
	unsigned int	bytes_read;

	dict = malloc(MAX_FILE_SIZE);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		write(1, "error\n", 6);
	bytes_read = read(fd, dict, MAX_FILE_SIZE);
	dict[bytes_read] = '\0';
	close(fd);
	return (dict);
}

void			get_rule(char *dict, char *start, unsigned int *rule_length)
{
	start = dict;
	while (!is_number(*start))
		start++;
	*rule_length = 0;
	while (start[*rule_length] != '\n')
		*rule_length += 1;
}

void		set_name_rule(char *line, t_name_rule *rule)
{
	unsigned int	i;

	i = 0;
	while (line[i] >= '0' && line[i] <= '9')
		i++;
	rule->number = malloc(i + 1);
	ft_strncpy(rule->number, line, i);
	rule->number[i] = '\0';
	line += i;
	while (*line == ' ')
		line++;
	if (*line != ':')
		exit(1);
	line++;
	while (*line == ' ')
		line++;
	i = 0;
	while (line[i] != '\n')
		i++;
	rule->name = malloc(i + 1);
	rule->name[i] = '\0';
	ft_strncpy(rule->number, line, i);
	rule->number_length = i;
}

t_name_rule	*parse_dict(char *filename, unsigned int *number_of_names)
{
	int				dict_i;
	unsigned int	num_of_rules;
	t_name_rule		*result = NULL;
	char			*dict = NULL;
	int				prev_newline_i;

	dict = read_dict(filename);
	num_of_rules = get_num_of_rules(dict);
	result = malloc(num_of_rules * sizeof(t_name_rule));

	prev_newline_i = -1;
	while (1)
	{
		get_rule(dict, )
	}
	free(dict);
	return (result);
}

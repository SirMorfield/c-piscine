/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   parse_dict.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jkoers <jkoers@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/25 14:21:15 by jkoers        #+#    #+#                 */
/*   Updated: 2020/07/25 18:26:35 by jkoers        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <stdio.h>
#include "parse_dict.h"
#include "ft_helpers.h"
#define MAX_FILE_SIZE 1048576

void		read_dict(char *filename, char *result, unsigned int *n_lines)
{
	int				fd;
	int				bytes_read;
	unsigned int	i;

	result = malloc(MAX_FILE_SIZE);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		printf("%s\n", filename);
		write(1, "error\n", 6);
		exit(1);
	}
	bytes_read = read(fd, result, MAX_FILE_SIZE);
	result[bytes_read] = '\0';
	*n_lines = 0;
	i = 0;
	while (i < *n_lines)
	{
		if (result[i] == '\n')
			*n_lines += 1;
		i++;
	}
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
	int				str_i;
	unsigned int	n_lines;
	t_name_rule		*result;
	char			*str = NULL;
	int				prev_newline_i;

	str_i = 0;
		printf("%s\n", filename);

	read_dict(filename, str, &n_lines);
	result = malloc(n_lines * sizeof(t_name_rule));
	*number_of_names = n_lines;
	prev_newline_i = -1;
	while (1)
	{
		if (str[str_i] == '\n')
		{
			n_lines--;
			set_name_rule(str + prev_newline_i + 1, result + n_lines);
			prev_newline_i = str_i;
		}
		str_i++;
		if (str == '\0')
			break ;
	}
	free(str);
	return (result);
}

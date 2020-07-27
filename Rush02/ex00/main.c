/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: ngerrets <ngerrets@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/26 14:26:08 by ngerrets      #+#    #+#                 */
/*   Updated: 2020/07/26 19:32:08 by ngerrets      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>
#include "parse_dict.h"
#include "do_magic.h"
#include "ft_helpers.h"

int			check_valid_integer(char *input)
{
	unsigned int	length;
	unsigned int	index;

	length = ft_strlen(input);
	if (length == 0)
	{
		ft_putstr("Error\n");
		return (0);
	}
	index = 0;
	while (index < length)
	{
		if (!(input[index] >= '0' && input[index] <= '9'))
		{
			ft_putstr("Error\n");
			return (0);
		}
		index++;
	}
	return (1);
}

void		remove_redundant_zeros(char *input)
{
	unsigned int	index1;
	unsigned int	index2;

	index1 = 0;
	if (ft_strlen(input) == 1)
		return ;
	while (input[index1] == '0')
		index1++;
	if (index1 == 0)
		return ;
	if (index1 == ft_strlen(input))
		index1--;
	index2 = 0;
	while (input[index1] != '\0')
	{
		input[index2] = input[index1];
		index1++;
		index2++;
	}
	input[index2] = '\0';
}

int			check_errors(t_name_rule *rules, char *input)
{
	unsigned int index;
	unsigned int longest;

	if (rules == NULL)
	{
		ft_putstr("Dict Error\n");
		return (0);
	}
	if (check_valid_integer(input) == 0)
		return (0);
	index = 0;
	longest = 0;
	while (rules[index].name != NULL)
	{
		if (ft_strlen(rules[index].number) > longest)
			longest = ft_strlen(rules[index].number);
		index++;
	}
	longest += 2;
	if (ft_strlen(input) > longest)
	{
		ft_putstr("Dict Error\n");
		return (0);
	}
	return (1);
}

/*
** returns 1 on success, on error 0
*/

int			parse_input(int argc, char **argv, char **dict_path, char **input)
{
	int reads;

	if (argc == 1)
	{
		*input = malloc(420);
		reads = read(1, *input, 420);
		(*input)[reads - 1] = '\0';
		*dict_path = "dicts/numbers.dict";
		return (1);
	}
	if (argc == 2)
	{
		*dict_path = "dicts/numbers.dict";
		*input = argv[1];
		return (1);
	}
	if (argc == 3)
	{
		*dict_path = argv[1];
		*input = argv[2];
		return (1);
	}
	return (0);
}

int			main(int argc, char **argv)
{
	t_name_rule		*rules;
	char			*dict_path;
	char			*input;

	if (parse_input(argc, argv, &dict_path, &input) == 0)
		return (0);
	rules = parse_dict(dict_path);
	if (rules == NULL)
	{
		write(1, "Dict Error\n", 11);
		return (0);
	}
	remove_redundant_zeros(input);
	if (check_errors(rules, input) == 0)
		return (0);
	do_magic(input, rules);
	free(rules);
	if (argc == 1)
		free(input);
	return (0);
}

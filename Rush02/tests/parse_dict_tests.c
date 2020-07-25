/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   parse_dict_tests.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: jkoers <jkoers@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/25 14:51:01 by jkoers        #+#    #+#                 */
/*   Updated: 2020/07/25 18:25:30 by jkoers        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>
#include "../parse_dict.h"

int		main(void)
{
	t_name_rule	*rules;
	unsigned int number_of_names;
	char *filename = "../dicts/numbers.dict";
	unsigned int i = 0;

	rules = parse_dict(filename, &number_of_names);
	while (i < number_of_names)
	{
		printf("%s\n", rules[i].number);
		printf("%u\n", rules[i].number_length);
		printf("%s\n", rules[i].name);
		printf("\n");
		i++;
	}
	return (0);
}

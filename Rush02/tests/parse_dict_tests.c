/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   parse_dict_tests.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: jkoers <jkoers@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/25 14:51:01 by jkoers        #+#    #+#                 */
/*   Updated: 2020/07/26 18:57:10 by jkoers        ########   odam.nl         */
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
	unsigned int number_of_rules;
	char *filename = "../dicts/numbers-short.dict";
	unsigned int i = 0;

	rules = parse_dict(filename);
	while (rules[i].name != NULL)
	{
		printf("number        <%s>\n", rules[i].number);
		// printf("number_length %u\n", rules[i].number_length);
		printf("name          <%s>\n", rules[i].name);
		printf("\n");
		i++;
	}
	free(rules);
	return (0);
}

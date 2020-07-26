/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   parse_dict_tests.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: jkoers <jkoers@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/25 14:51:01 by jkoers        #+#    #+#                 */
/*   Updated: 2020/07/26 14:15:32 by jkoers        ########   odam.nl         */
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
	char *filename = "../dicts/numbers.dict";
	unsigned int i = 0;

	rules = parse_dict(filename, &number_of_rules);
	while (i < number_of_rules)
	{
		printf("number        <%s>\n", rules[i].number);
		printf("number_length %u\n", rules[i].number_length);
		printf("name          <%s>\n", rules[i].name);
		printf("\n");
		i++;
	}
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   find.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: ngerrets <ngerrets@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/26 14:33:11 by ngerrets      #+#    #+#                 */
/*   Updated: 2020/07/26 17:54:01 by jkoers        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "do_magic.h"
#include "ft_helpers.h"
#include "parse_dict.h"
#include <stdlib.h>

/*
**	Compare two strings that have to match length.
**	return 0 if not equal, return 1 if equal
*/

int				compare_number(char *string, char *number, unsigned int numl)
{
	unsigned int	index;

	if (ft_strlen(string) != numl)
		return (0);
	index = 0;
	while (index < numl)
	{
		if (string[index] == '\0')
			return (0);
		if (string[index] != number[index])
			return (0);
		index++;
	}
	return (1);
}

/*
**	Generate the string that will be compared to the numbers in the dictionary
*/

char			*generate_compare_number(char first_number, int zeros)
{
	int		index;
	char	*number;

	number = malloc(zeros + 2);
	number[0] = first_number;
	index = 1;
	while (index < zeros + 1)
	{
		number[index] = '0';
		index++;
	}
	number[index] = '\0';
	return (number);
}

/*
**	Find the number in the dictionary.
**	return the matching word if found, return a null-terminator if not found
*/

char			*find_in_dict(char *number, t_name_rule *rules)
{
	unsigned int	index;
	unsigned int	length;

	index = 0;
	length = ft_strlen(number);
	while (rules[index].name != NULL)
	{
		if (compare_number(rules[index].number, number, length) == 1)
			return (rules[index].name);
		index++;
	}
	return ("\0");
}

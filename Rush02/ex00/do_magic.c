/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   do_magic.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: ngerrets <ngerrets@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/25 14:20:46 by ngerrets      #+#    #+#                 */
/*   Updated: 2020/07/26 19:43:34 by jkoers        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include "do_magic.h"
#include "parse_dict.h"
#include "ft_helpers.h"
#include "find.h"

/*
**	Match the word with the number and print.
**	Add dashes and spaces if neccesary
*/

void			put_word(char *cn, t_name_rule *rules, char *input, int zeros)
{
	char *output;

	output = find_in_dict(cn, rules);
	ft_putstr(output);
	if (zeros == 1 && cn[1] == '0' && input[1] != '0')
	{
		write(1, "-", 1);
		find_and_put(rules, &input[1], 0);
	}
	else if (zeros < 3)
	{
		if (!(input != 0 && input[zeros + 1] == '\0'))
			write(1, " ", 1);
	}
}

/*
**	Supply the input and amount of zeros, the function will output
**	the appropriate word (if found), return 0 if the input is a 0
*/

int				find_and_put(t_name_rule *rules, char *input, int zeros)
{
	char	*compn;

	if (input != 0)
	{
		if (input[0] == '0')
			return (0);
		compn = generate_compare_number(input[0], zeros);
		if (zeros == 1)
		{
			compn = generate_compare_number(input[0], 1);
			if (input[0] == '1')
				compn[1] = *(input + 1);
		}
	}
	else
		compn = generate_compare_number('1', zeros);
	put_word(compn, rules, input, zeros);
	free(compn);
	return (1);
}

/*
**	Put a space or a comma
*/

void			put_c_or_s(int index, int gr_left, int gr_of_3, char in)
{
	if (!(gr_left == 0 && index == 0))
	{
		if (index < gr_of_3)
		{
			if (!(index == gr_of_3 - 1 && in == '0'))
				ft_putstr(", ");
			else
				ft_putstr(" ");
		}
	}
}

/*
**	Go through the groups of three and translate them into words
*/

void			do_gr_of_3(int gr_of_3, int gr_left, char *in, t_name_rule *r)
{
	int index;
	int p;
	int input_length;

	input_length = ft_strlen(in);
	index = 0;
	while (index < gr_of_3)
	{
		p = gr_left + index * 3;
		if (!(in[p] == '0' && in[p + 1] == '0' && in[p + 2] == '0'))
		{
			put_c_or_s(index, gr_left, gr_of_3, in[p]);
			if (find_and_put(r, &in[p], 0) == 1)
				find_and_put(r, 0, 2);
			if (gr_of_3 == index + 1)
				ft_putstr("and ");
			if (find_and_put(r, &in[p + 1], 1) == 0)
				find_and_put(r, &in[p + 2], 0);
			if (gr_of_3 != index + 1)
				find_and_put(r, 0, input_length - p - 3);
		}
		index++;
	}
}

/*
**	Entry point. Calculate groups of three and the leftover digits.
**	Handle the leftovers and hand groups of three to another function
*/

void			do_magic(char *input, t_name_rule *rules)
{
	int			groups_of_three;
	int			group_leftover;
	int			input_length;

	input_length = ft_strlen(input);
	if (input_length == 1 && input[0] == '0')
		ft_putstr(find_in_dict(&input[0], rules));
	groups_of_three = input_length / 3;
	group_leftover = input_length % 3;
	if (group_leftover == 2)
	{
		find_and_put(rules, &input[0], 1);
		if (input_length > 3)
			find_and_put(rules, 0, input_length - 2);
	}
	else if (group_leftover == 1)
	{
		find_and_put(rules, &input[0], 0);
		if (input_length > 3)
			find_and_put(rules, 0, input_length - 1);
	}
	do_gr_of_3(groups_of_three, group_leftover, input, rules);
	ft_putstr("\n");
}

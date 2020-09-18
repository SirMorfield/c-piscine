/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   tester.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: joppe <joppe@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/05 00:42:53 by joppe         #+#    #+#                 */
/*   Updated: 2020/09/11 15:50:12 by joppe         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_string.h"
#include "types.h"

int main()
{
	char *test[] = {
		"",

		",",
		",,",
		",,,,,,,,",

		"a",
		"aa",
		"aaa",

		"a,",
		"a,,",
		"a,,,",

		",a",
		",,a",
		",,,a",

		",a,",
		",,a,,",
		",,,a,,,",

		"a,b",
		"a,,b",
		"a,,,b",

		",a,b",
		",,a,,b",
		",,,a,,,b",

		",a,b,",
		",,a,,b,,",
		",,,a,,,b,,,",
		NULL
	};

	char		**arr;
	uint64_t	i2;
	uint64_t	i = 0;
	char		*seperator = ",";
	while (test[i] != NULL)
	{
		arr = ft_split(test[i], seperator);
		i2 = 0;
		printf("<%s>    --> ", test[i]);
		while (arr[i2] != NULL)
		{
			printf("<%s> ", arr[i2]);
			i2++;
		}
		printf("\n");
		i++;
	}
}

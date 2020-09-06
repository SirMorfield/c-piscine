/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   test.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: joppe <joppe@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/31 01:45:54 by joppe         #+#    #+#                 */
/*   Updated: 2020/08/31 02:39:56 by joppe         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include "ft_matrix.h"
#include <stdlib.h>
#include <time.h>

uint64_t	ft_strlen(char *str)
{
	uint64_t	length;

	if (str == NULL)
		return (0);
	length = 0;
	while (str[length] != '\0')
		length++;
	return (length);
}

char *rand_string(char *str, uint64_t size)
{
    const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVW0123456789";
    if (size) {
        --size;
        for (uint64_t n = 0; n < size; n++) {
            int key = rand() % (int)(sizeof(charset - 1));
            str[n] = charset[key];
        }
        str[size] = '\0';
    }
    return str;
}

int main(void)
{
	uint64_t max = 100;
	uint64_t tests = 10000;
	char *str = malloc(max + 1);

	size_t buildin = 0;
	uint64_t ft = 0;
	double time_taken;
	clock_t t;
	uint64_t i;


    t = clock();

	i = 0;
	while(i < tests)
	{
		i++;
		str = rand_string(str, max);
		buildin += strlen(str);
	}

    t = clock() - t;
    time_taken = ((double)t)/CLOCKS_PER_SEC; // in seconds
    printf("buildin %f seconds %lu\n", time_taken, buildin);


    t = clock();

	i = 0;
	while(i < tests)
	{
		i++;
		str = rand_string(str, max);
		ft += ft_strlen(str);
	}

    t = clock() - t;
    time_taken = ((double)t)/CLOCKS_PER_SEC; // in seconds
    printf("ft      %f seconds %lu\n", time_taken, ft);

	printf("%lu\n", sizeof(clock_t));
	return (0);
}
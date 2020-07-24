/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   get_permutations.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: jkoers <jkoers@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/19 09:49:46 by jkoers        #+#    #+#                 */
/*   Updated: 2020/07/19 18:51:10 by jkoers        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

unsigned int g_position = 0;

int		factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb <= 3)
		return (nb * (nb - 1));
	else
		return (nb * factorial(nb - 1));
}

void	strcpy2(char *dest, char *src)
{
	unsigned long i;

	i = 0;
	while (1)
	{
		dest[i] = src[i];
		if (src[i] == '\0')
			break ;
		i++;
	}
}

int		strlen2(char *str)
{
	int i;

	i = 0;
	if (!str)
		return (-1);
	while (str[i] != '\0')
		i++;
	return (i);
}

void	swap(char *x, char *y)
{
	char temp;

	temp = *x;
	*x = *y;
	*y = temp;
}

void	permutate(char *a, int l, int r, char **result)
{
	int j;

	if (l == r)
	{
		strcpy2(*(result + g_position), a);
		g_position++;
	}
	else
	{
		j = l;
		while (j <= r)
		{
			swap((a + l), (a + j));
			permutate(a, l + 1, r, result);
			swap((a + l), (a + j));
			j++;
		}
	}
}

char	**get_permutations(char *str)
{
	char	**result;
	int		n;
	int		str_length;

	str_length = strlen2(str);
	result = malloc(factorial(str_length) * sizeof(char*));
	n = 0;
	while (n < factorial(str_length))
	{
		*(result + n) = malloc((str_length + 1) * sizeof(char));
		n++;
	}
	permutate(str, 0, str_length - 1, result);
	return (result);
}

int main(void)
{
	char str[] = "1234";
	get_permutations(str);
	return (0);
}
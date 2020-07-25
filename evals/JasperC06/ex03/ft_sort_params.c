/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_sort_params.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: jsimonis <jsimonis@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/23 17:31:58 by jsimonis      #+#    #+#                 */
/*   Updated: 2020/07/24 15:41:52 by jsimonis      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strlen(char *str)
{
	int len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

int		ft_strcmp(char *s1, char *s2)
{
	int diff;

	while (1)
	{
		diff = *(unsigned char*)s1 - *(unsigned char*)s2;
		if (diff != 0 || *s1 == '\0')
			return (diff);
		s1++;
		s2++;
	}
}

void	ft_swap(char **a, char **b)
{
	char *c;

	c = *a;
	*a = *b;
	*b = c;
}

void	ft_sort_str_tab(char **tab, int size)
{
	char	not_yet_sorted;
	int		i;

	not_yet_sorted = 1;
	while (not_yet_sorted)
	{
		not_yet_sorted = 0;
		i = 0;
		while (i < size - 1)
		{
			if (ft_strcmp(tab[i], tab[i + 1]) > 0)
			{
				ft_swap(tab + i, tab + i + 1);
				not_yet_sorted = 1;
			}
			i++;
		}
	}
}

int		main(int argc, char **argv)
{
	int i;

	ft_sort_str_tab(argv, argc);
	i = 1;
	while (i < argc)
	{
		write(1, argv[i], ft_strlen(argv[i]));
		write(1, "\n", 1);
		i++;
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strjoin.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: joppe <joppe@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/20 15:36:17 by joppe         #+#    #+#                 */
/*   Updated: 2020/07/20 19:59:24 by joppe         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		ft_strlen(char *str)
{
	int len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		if (src[i] == '\0')
			break ;
		i++;
	}
	return (dest + i);
}

char	*alloc_for_concatenated_str(int size, char **strs, char *sep)
{
	unsigned long	total_length;
	int				str_i;
	char			*concatenated;

	total_length = 0;
	str_i = 0;
	while (str_i < size)
	{
		total_length += ft_strlen(strs[str_i]);
		str_i++;
	}
	total_length += ft_strlen(sep) * (size - 1);
	total_length += 1;
	concatenated = malloc(total_length);
	return (concatenated);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int				str_i;
	char			*concatenated;
	unsigned long	concatenated_i;
	int				length;
	int				sep_length;

	str_i = 0;
	concatenated = alloc_for_concatenated_str(size, strs, sep);
	concatenated_i = 0;
	sep_length = ft_strlen(sep);
	if (concatenated == NULL)
		return (NULL);
	while (str_i < size)
	{
		length = ft_strlen(strs[str_i]);
		ft_strncpy(concatenated + concatenated_i, strs[str_i], length);
		concatenated_i += length;
		if (str_i != size - 1)
		{
			ft_strncpy(concatenated + concatenated_i, sep, sep_length);
			concatenated_i += sep_length;
		}
		str_i++;
	}
	return (concatenated);
}

int		main()
{
	char *a;
	char *matrix[4];
	matrix[0] = "abcf";
	matrix[1] = "def";
	matrix[2] = "ghi";
	matrix[3] = "jkl";
	char *seperator = "  ";
	a = ft_strjoin(0, matrix, seperator);
	printf("<%s>", a);
	free(a);
	return 0;
}

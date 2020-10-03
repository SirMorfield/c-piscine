/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_string_split.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: joppe <joppe@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/31 01:39:54 by joppe         #+#    #+#                 */
/*   Updated: 2020/09/28 22:05:47 by joppe         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "types.h"
#include "ft_string.h"

uint64_t	count_words(char *str, char *charset, uint64_t charset_length)
{
	uint64_t	words;
	char		*prev_seperator;

	if (str == NULL || str[0] == '\0')
		return (0);
	words = 0;
	prev_seperator = str - charset_length;
	while (*str != '\0')
	{
		if (ft_strncmp(str, charset, charset_length) == 0)
		{
			if (prev_seperator + charset_length != str)
				words++;
			prev_seperator = str;
			str += charset_length;
		}
		else
			str++;
	}
	if (prev_seperator + charset_length != str)
		words++;
	return (words);
}

char		**ft_string_split(char *str, char *charset)
{
	char		**arr;
	uint64_t	i;
	uint64_t	word_length;
	uint64_t	charset_length;
	uint64_t	num_words;

	charset_length = ft_strlen(charset);
	num_words = count_words(str, charset, charset_length);
	arr = malloc((num_words + 1) * sizeof(char *));
	i = 0;
	while (i < num_words)
	{
		word_length = 0;
		while (ft_strncmp(str + word_length, charset, charset_length) != 0)
			word_length++;
		if (word_length > 0)
		{
			arr[i] = ft_strndup(str, word_length);
			i++;
		}
		str += word_length + charset_length;
	}
	arr[i] = NULL;
	return (arr);
}

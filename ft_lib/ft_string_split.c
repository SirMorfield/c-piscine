#include <stdlib.h>
#include "types.h"
#include "ft_string.h"

bool		is_word_delimiter(char c)
{
	return (c == ' ' || c == '\n' || c == '\t');
}

uint64_t	count_words(char *str)
{
	uint64_t	words;

	words = 0;
	while (*str != '\0')
	{
		while (*str && is_word_delimiter(*str))
			str++;
		if (*str && !is_word_delimiter(*str))
		{
			words++;
			while (*str && !is_word_delimiter(*str))
				str++;
		}
	}
	return (words);
}

char		**ft_split(char *str)
{
	char		**arr;
	uint64_t	i;
	uint64_t	word_length;

	arr = malloc((count_words(str) + 1) * sizeof(char *));
	i = 0;
	while (*str != '\0')
	{
		while (*str != '\0' && is_word_delimiter(*str))
			str++;
		word_length = 0;
		while (str[word_length] != '\0' && !is_word_delimiter(str[word_length]))
			word_length++;
		if (word_length != 0)
		{
			arr[i] = ft_strndup(str, word_length);
			i++;
		}
		str += word_length;
	}
	arr[i] = NULL;
	return (arr);
}

// #include <stdio.h>
// int		main(int arc, char **argv)
// {
// 	char		**arr;
// 	char		*str;
// 	uint64_t	i;

// 	str =  "Hello, World!";
// 	arr = ft_split(str);
// 	i = 0;
// 	while (arr[i] != NULL)
// 	{
// 		printf("<%s>\n", arr[i]);
// 		i++;
// 	}
// 	return (0);
// }
#include <stdlib.h>
#include "types.h"
#include "ft_string.h"
#include <stdio.h>


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
		// printf("<%c>\n", *str);
		if (ft_strncmp(str, charset, charset_length) == 0)
		// if (ft_strncmp(str, charset, charset_length) == 0 || *(str) == '\0')
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

char		**ft_split(char *str, char *charset)
{
	char		**arr;
	uint64_t	i;
	uint64_t	word_length;
	uint64_t	charset_length;
	uint64_t	n_words;

	charset_length = ft_strlen(charset);
	n_words = count_words(str, charset, charset_length);
	printf("nw %lu\n", n_words);

	// arr = malloc((n_words + 1) * sizeof(char *));
	// i = 0;
	// while (i < n_words && *str != '\0')
	// {
	// 	word_length = 0;
	// 	while (ft_strncmp(str + word_length, charset, charset_length) != 0 && str[word_length] != '\0')
	// 		word_length++;
	// 	// printf("wl %lu\n", word_length);
	// 	if (word_length > 0)
	// 	{
	// 		arr[i] = ft_strndup(str, word_length);
	// 		i++;
	// 	}
	// 	else
	// 		n_words--;
	// 	str += word_length + charset_length;
	// }
	// arr[i] = NULL;
	return (arr);
}

int		main(int arc, char **argv)
{
	char		**arr;
	char		*str;
	uint64_t	i;

	char *test[] = {
		// "",

		",",
		",,",
		",,,,,,,,",

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

	i = 0;
	char *seperator = ",";
	uint64_t seperator_len = ft_strlen(seperator);

	while (test[i] != NULL)
	{
		printf("%lu\n", count_words(test[i], seperator, seperator_len));
		i++;
		if (i % 3 == 0)
			printf("\n");
	}
	// str =  ",abc,,";
	// arr = ft_split(str, ",");
	// while (arr[i] != NULL)
	// {
	// 	printf("<%s>\n", arr[i]);
	// 	i++;
	// }
}
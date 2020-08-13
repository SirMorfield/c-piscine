#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdint-gcc.h>
#include <string.h>
#include "../helpers/ft_str.h"

typedef struct	s_node {
    char		*buf;
    struct		s_node *next;
}				t_node;

t_node *malloc_node(int32_t fd, uint64_t block_size, uint64_t *total_size)
{
	t_node		*node;
	int32_t		bytes_read;

	node = malloc(sizeof(t_node));
	node->buf = malloc(block_size);
	bytes_read = read(fd, node->buf, block_size);
	*total_size += bytes_read;
	if (bytes_read == block_size)
	{
		node->next = malloc(sizeof(t_node));
	}
	else
	{
		node->buf[bytes_read] = '\0';
		*total_size += 1;
		node->next = NULL;
	}
	return (node);
}

t_node *get_list(char *filename, uint64_t *total_size, uint64_t block_size)
{
	int fd;
	t_node *head;
    t_node *current;

    fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (NULL);
	head = malloc_node(fd, block_size, total_size);
	current = head->next;
    while (current != NULL)
	{
		current = malloc_node(fd, block_size, total_size);
		current = current->next;
	}
    close(fd);
	return (head);
}

char *readfile(char *filename)
{
	const uint64_t	block_size = 10;
	uint64_t 		total_size;
	t_node			*list;
	t_node			*next;
	char			*res;
	uint64_t		res_i;

	list = get_list(filename, &total_size, block_size);
	res = malloc(total_size * sizeof(char));
	res_i = 0;
	while (list != NULL)
	{
		ft_strncpy(res + res_i, list->buf, block_size);
		res_i += block_size;
		free(list->buf);
		next = list->next;
		free(list);
		list = next;
	}
	return (res);
}

int main(void) {

	char *res;

	res = readfile("test.txt");

	printf("<%s>\n", res);
	free(res);
    return 0;
}
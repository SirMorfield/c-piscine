/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_display_file.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: joppe <joppe@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/11 00:03:11 by joppe         #+#    #+#                 */
/*   Updated: 2020/09/11 00:15:38 by joppe         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void	ft_putstr(char *str)
{
	unsigned long i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, str + i, 1);
		i++;
	}
}

void	ft_display_file(char *filename)
{
	const unsigned int	blocksize = 4096;
	char				buf[blocksize];
	int					fd;
	int					bytes_read;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		ft_putstr("Cannot read file.");
		return ;
	}
	bytes_read = blocksize;
	while (bytes_read == blocksize)
	{
		bytes_read = read(fd, buf, blocksize);
		write(1, buf, blocksize);
	}
	close(fd);
}

int		main(int argc, char **argv)
{
	if (argc == 1)
		ft_putstr("File name missing.");
	else if (argc > 2)
		ft_putstr("Too many arguments.");
	else
		ft_display_file(argv[1]);
	return (0);
}

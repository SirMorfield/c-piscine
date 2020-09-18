
int fd = open(filename);
if (fd < 0)
{
	ft_putstr(strerror(errno));
	return ;
}

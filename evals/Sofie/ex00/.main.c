#include <stdio.h>

char	*ft_strcpy(char *dest, char *src);

int	main()
{
	char	strcpy[] = "";
	char	str[] = "I love cats";

	ft_strcpy(strcpy, str);
	printf("This should read I love cats: %s\n", strcpy);
	return(0);
}

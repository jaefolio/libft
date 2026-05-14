#include "libft.h"

char	*ft_strcat(char *dest, char *src)
{
	int		i;
	int		j;

	i = 0;
	while (dest[i])
		i++;
	j = 0;
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

/*
char *ft_strcat(char *dest, char *src);

int		main()
{
		char	dest[] = "Hello, ";
		char	src[] = "world.";

		ft_strcat(dest, src);
		printf("%s\n", dest);
}
*/

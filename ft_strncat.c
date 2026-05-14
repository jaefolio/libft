#include "libft.h"

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (dest[i])
	{
		i++;
	}
	j = 0;
	while (src[j] && j < nb)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

/*
char *ft_strncat(char *dest, char *src, unsigned int nb);

int		main()
{
		char	dest[] = "Hello, ";
		char	src[] = "world.";

		ft_strncat(dest, src, 4);
		printf("%s\n", dest);
}
*/

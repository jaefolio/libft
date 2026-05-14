#include "libft.h"

char	*ft_strdup(char *src)
{
	char	*dest;
	int		len;
	char	*p;

	len = 0;
	while (src[len])
		len++;
	dest = malloc(len + 1);
	if (!dest)
		return (NULL);
	p = dest;
	while (*src != '\0')
		*p++ = *src++;
	*p = '\0';
	return (dest);
}

/*
#include <stdio.h>
int	main()
{
	printf("%s\n", ft_strdup("Hello"));
}
*/

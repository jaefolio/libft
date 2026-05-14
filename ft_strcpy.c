#include "libft.h"

char	*ft_strcpy(char *dest, char *src)
{
	char	*original;

	original = dest;
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (original);
}

#include "libft.h"

// Allocates nmemb*size bytes, zeroes them, returns pointer or NULL on fail
int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
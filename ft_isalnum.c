#include "libft.h"

// Allocates nmemb*size bytes, zeroes them, returns pointer or NULL on fail
int ft_isalnum(int c)
{
    if (((c >= 65 && c <= 90) || (c >= 97 && c <= 122)) || (c >= '0' && c <= '9'))
		return (1);
	return (0);
}
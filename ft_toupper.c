#include "libft.h"

// Returns uppercase version of c if lowercase, else returns c unchanged
int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}
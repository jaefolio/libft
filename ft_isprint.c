#include "libft.h"

// Returns 1 if c is a printable character (32-126), 0 otherwise
int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}
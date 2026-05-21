#include "libft.h"

// check if c is a printable ascii character
int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

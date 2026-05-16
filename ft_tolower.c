#include "libft.h"

// Returns lowercase version of c if uppercase, else returns c unchanged
int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}
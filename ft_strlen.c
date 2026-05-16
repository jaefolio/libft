#include "libft.h"

// Returns the length of string s (excluding null terminator)
size_t	ft_strlen(const char *s)
{
	size_t	len;

	len = 0;
	while (s[len])
		len++;
	return (len);
}

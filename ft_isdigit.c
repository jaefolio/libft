#include "libft.h"

// Returns 1 if c is a digit (0-9), 0 otherwise
int ft_isdigit(int c)
{
    if (c >= '0' && c <= '9')
        return (1);
    return (0);
}
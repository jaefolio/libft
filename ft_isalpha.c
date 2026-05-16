#include "libft.h"

// Allocates nmemb*size bytes, zeroes them, returns pointer or NULL on fail
int ft_isalpha(int c)
{
    if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
        return (1);
    return (0);
}
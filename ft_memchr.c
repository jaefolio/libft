#include "libft.h"

// Finds first occurrence of c in first n bytes of s, returns pointer or NULL
void    *ft_memchr(const void *s, int c, size_t n)
{
    size_t  i;
    const unsigned char *ptr;

    ptr = (const unsigned char *) s;
    i = 0;
    while (i < n)
    {
        if (*ptr == (unsigned char)c)
            return ((void *)ptr);
        ptr++;
        i++;
    }
    return (NULL);
}

/* int main() {
    char str[] = "Hello, World!";
    char *ptr = ft_memchr(str, 'W', strlen(str)); // Search for 'W'

    if (ptr != NULL) {
        printf("Character found: %s\n", ptr); // Output: World!
    } else {
        printf("Character not found.\n");
    }
    return 0;
} */

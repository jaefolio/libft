#include "libft.h"

void    *ft_memccpy(void *dest, const void *src, int c, size_t n)
{
    size_t  i;
    unsigned char   *d;
    const unsigned char *s;
    
    i = 0;
    d = (unsigned char *) dest;
    s = (const unsigned char *) src;
    while (i < n)
    {
        d[i] = s[i];
        if (s[i] == (unsigned char)c)
            return &d[i + 1];
        i++;
    }
    return NULL;
}

/* int main() {
    char src[] = "Hello, World!";
    char dest[20];
    char *ptr;

    // Copies up to 10 bytes, or until ',' is found
    ptr = (char *)ft_memccpy(dest, src, ',', 10);

    if (ptr) {
        *ptr = '\0'; // Null-terminate at the found character
        printf("Found: %s\n", dest); // Output: Found: Hello,
    } else {
        printf("Delimiter not found.\n");
    }
    return 0;
} */
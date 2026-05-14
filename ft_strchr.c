#include "libft.h"

char    *ft_strchr(const char *s, int c)
{
    unsigned char  c2;

    c2 = (unsigned char)c;
    while (*s)
    {
        if ((unsigned char)*s == c2)
            return ((char *)s);
        s++;
    }
    if (c2 == '\0')
        return ((char *)s); 
    return (NULL);
}

/* int main(void)
{
    const char  *s = "hello";
    char        *p;

    // Normal case
    p = ft_strchr(s, 'l');
    printf("strchr 'l': %s\n", p ? p : "NULL");       // "llo"

    // Not found
    p = ft_strchr(s, 'z');
    printf("strchr 'z': %s\n", p ? p : "NULL");       // NULL

    // First char
    p = ft_strchr(s, 'h');
    printf("strchr 'h': %s\n", p ? p : "NULL");       // "hello"

    // Last char
    p = ft_strchr(s, 'o');
    printf("strchr 'o': %s\n", p ? p : "NULL");       // "o"

    // Null terminator
    p = ft_strchr(s, '\0');
    printf("strchr '\\0': %s|\n", p ? p : "NULL");    // "|" (empty string)
} */
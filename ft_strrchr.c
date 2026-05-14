#include "libft.h"

char    *ft_strrchr(const char *s, int c)
{
    const char  *s2;
    unsigned char   c2;

    s2 = s;
    c2 = (unsigned char)c;
    while (*s)
        s++;
    if (c2 == '\0')
        return ((char *)s);
    while (s >= s2)
    {
        if ((unsigned char)*s == c2)
            return ((char *)s);
        s--;
    }
    return (NULL);
}

/* int main(void)
{
    const char  *s = "hello";
    char        *p;

    // Normal case
    p = ft_strrchr(s, 'l');
    printf("strchr 'l': %s\n", p ? p : "NULL");       // "llo"

    // Not found
    p = ft_strrchr(s, 'z');
    printf("strchr 'z': %s\n", p ? p : "NULL");       // NULL

    // First char
    p = ft_strrchr(s, 'h');
    printf("strchr 'h': %s\n", p ? p : "NULL");       // "hello"

    // Last char
    p = ft_strrchr(s, 'o');
    printf("strchr 'o': %s\n", p ? p : "NULL");       // "o"

    // Null terminator
    p = ft_strrchr(s, '\0');
    printf("strchr '\\0': %s|\n", p ? p : "NULL");    // "|" (empty string)
} */
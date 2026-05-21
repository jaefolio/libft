#include "libft.h"

// Allocates and returns a substring of s, starting at index start for len characters
char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    size_t  s_len;
    char    *sub;

    s_len = ft_strlen(s);
    if (start >= s_len)
    {
        sub = malloc(1);
        sub[0] = '\0';
        return (sub);
    }
    if (len > s_len - start)
        len = s_len - start;
    sub = malloc(len + 1);
    if (!sub)
        return (NULL);
    ft_strlcpy(sub, s + start, len + 1);
    return (sub);
}

/* int main()
{
    char *result;
    // Normal case
result = ft_substr("Hello World", 6, 5);
printf("%s\n", result); // "World"
free(result);

// Start beyond string length
result = ft_substr("Hello", 10, 5);
printf("%s\n", result); // ""
free(result);

// Len longer than remaining string
result = ft_substr("Hello", 2, 100);
printf("%s\n", result); // "llo"
free(result);

// Start at 0
result = ft_substr("Hello", 0, 3);
printf("%s\n", result); // "Hel"
free(result);

// Empty string
result = ft_substr("", 0, 5);
printf("%s\n", result); // ""
free(result);

// Len 0
result = ft_substr("Hello", 2, 0);
printf("%s\n", result); // ""
free(result);

} */
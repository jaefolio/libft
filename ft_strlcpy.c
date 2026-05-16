#include "libft.h"

// Copies src into dst (up to size-1), always null-terminates, returns src length
size_t  ft_strlcpy(char *dst, const char *src, size_t size)
{
    size_t  i;
    size_t  src_len;

    src_len = 0;
    while (src[src_len])
        src_len++;
    if (size == 0)
        return (src_len);
    i = 0;
    while (i < size - 1 && src[i])
    {
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';
    return (src_len);
}

/* int main(void)
{
    char    dst[10];

    printf("%zu | %s\n", ft_strlcpy(dst, "hello",         sizeof(dst)), dst);
    printf("%zu | %s\n", ft_strlcpy(dst, "hello world!!", sizeof(dst)), dst);
    printf("%zu | %s\n", ft_strlcpy(dst, "",              sizeof(dst)), dst);
    printf("%zu | %s\n", ft_strlcpy(dst, "hello",         0),           dst);

    return (0);
}*/
#include "libft.h"

void    *ft_memmove(void *dest, const void *src, size_t n)
{
    size_t  i;
    unsigned char   *d;
    const unsigned char *s;

    d = (unsigned char *) dest;
    s = (const unsigned char *) src;
    if (d < s)
    {
        i = 0;
        while (i < n)
        {
            d[i] = s[i];
            i++;
        }
    }
    else if (d > s)
    {
        i = n;
        while (i-- > 0)
            d[i] = s[i];
    }
    return (dest);
}

/* int main()
{
    char str1[100] = "Learningisfun";
    char str2[100] = "Learningisfun";

    printf("Original string (str1) : %s\n", str1);
    printf("Original string (str2) : %s\n", str2);

    // Using memcpy on first copy
    memcpy(str1 + 8, str1, 10);
    printf("memcpy overlap  : %s\n", str1);

    // Using memmove on second independent copy
    ft_memmove(str2 + 8, str2, 10);
    printf("memmove overlap : %s\n", str2);

    return 0;
}  */
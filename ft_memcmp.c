#include "libft.h"

int ft_memcmp(const void *ptr1, const void *ptr2, size_t num)
{
    const unsigned char   *p1;
    const unsigned char   *p2;

    p1 = (const unsigned char *) ptr1;
    p2 = (const unsigned char *) ptr2;
    while (num > 0)
     {
        if (*p1 != *p2)
            return (*p1 - *p2);
        num--;
        p1++;
        p2++;
     }
    return (0);
}

/* int main() {
    int res = 0;
    char s1[10] = "geeks";
    char s2[10] = "greeks";

    // Use memcmp() to compare s1 and s2 up to
  	// length of s1
    res = ft_memcmp(s1, s2, strlen(s1));
    printf("%d\n", res);

    // Check the result of memcmp
    if (res > 0)
        printf("s1 is greater");
    else if (res < 0)
        printf("s2 is greater");
    else
        printf("both are equal");

    return 0;
} */
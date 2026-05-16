#include "libft.h"

// Fills len bytes of ptr with value x, returns ptr
void    *ft_memset(void *ptr, int x, size_t len)
{
    unsigned char *dst;
    dst = ptr;
    while (len > 0)
    {
        *dst = (unsigned char) x;
        dst++;
        len--;
    }
    return ptr;
}

/*
int main()
{
    char str[50] = "GeeksForGeeks is for programming geeks.";
    printf("\nBefore memset(): %s\n", str);

    // Fill 8 characters starting from str[13] with '.'
    ft_memset(str + 10, 'w', 1*sizeof(char));

    printf("After memset():  %s", str);
    return 0;
}
*/
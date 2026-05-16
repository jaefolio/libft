#include "libft.h"

// Writes n zero bytes to memory area s
void    ft_bzero(void *s, size_t n)
{
    unsigned char *p;
    
    p = (unsigned char *) s;
    while (n > 0)
    {
        *p = 0;
        p++;
        n--;
    }
}

/*
int main()
{
    char str[50] = "GeeksForGeeks is for programming geeks.";
    printf("\nBefore bzero(): %s\n", str);

    ft_bzero(str + 13, 0*sizeof(char));

    printf("After bzero():  %s", str);
    return 0;
}
*/
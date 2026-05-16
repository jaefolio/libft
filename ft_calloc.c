#include "libft.h"

// Allocates nmemb*size bytes, zeroes them, returns pointer or NULL on fail
void    *ft_calloc(size_t nmemb, size_t size)
{
    void    *ptr;

    if (nmemb == 0 || size == 0)
        return (malloc(0));
    if (nmemb > SIZE_MAX / size)
        return (NULL);
    ptr = malloc (nmemb * size);
    if (!ptr)
        return (NULL);
    ft_bzero(ptr, nmemb * size);
    return (ptr);
}

/* int main(void)
{
    char    *str;
    int     *arr;

    // Normal case
    str = ft_calloc(5, sizeof(char));
    printf("normal:   %p | zeroed: %d\n", str, str[0] == 0);
    free(str);

    // Array of ints, all should be 0
    arr = ft_calloc(5, sizeof(int));
    printf("int arr:  %d %d %d\n", arr[0], arr[1], arr[2]);
    free(arr);

    // Size 0
    str = ft_calloc(0, sizeof(char));
    printf("0 count:  %p\n", str);
    free(str);

    // Overflow (count * size wraps around)
    str = ft_calloc(SIZE_MAX, 2);
    printf("overflow: %p (should be NULL)\n", str);
    free(str);

    return (0);
} */
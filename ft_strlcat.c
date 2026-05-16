#include "libft.h"

// Appends src to dst, returns total length it tried to create
size_t  ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t  i;
    size_t  dlen;
    size_t  slen;

    dlen = 0;
    while (dlen < size && dst[dlen])
        dlen++;
    slen = 0;
    while (src[slen])
        slen++;
    if (dlen == size)
        return (size + slen);
    i = 0;
    while (i < slen && (dlen + i + 1) < size)
    {
        dst[dlen + i] = src[i];
        i++;
    }
    dst[dlen + i] = '\0';
    return (dlen + slen);
}

/* int main(void)
{
    char buf[16];
    size_t ret;

    // basic append
    strcpy(buf, "Hello");
    ret = ft_strlcat(buf, ", world!", sizeof(buf));
    printf("'%s' ret=%zu truncated=%s\n", buf, ret, ret >= sizeof(buf) ? "yes" : "no");

    // truncation
    strcpy(buf, "Hello");
    ret = ft_strlcat(buf, ", world! too long!!", sizeof(buf));
    printf("'%s' ret=%zu truncated=%s\n", buf, ret, ret >= sizeof(buf) ? "yes" : "no");

    // empty dst
    buf[0] = '\0';
    ret = ft_strlcat(buf, "Hello", sizeof(buf));
    printf("'%s' ret=%zu truncated=%s\n", buf, ret, ret >= sizeof(buf) ? "yes" : "no");
} */
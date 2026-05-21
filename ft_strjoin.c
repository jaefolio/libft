#include "libft.h"

//Allocates memory (using malloc(3)) and returns a
//new string, which is the result of concatenating
//’s1’ and ’s2’.
char    *ft_strjoin(char const *s1, char const *s2)
{
    size_t  s_len;
    char    *new_s;

    if (!s1 || !s2)
        return (NULL);
    s_len = ft_strlen(s1) + ft_strlen(s2) + 1;
    new_s = malloc(s_len);
    if (!new_s)
        return (NULL);
    ft_strlcpy(new_s, s1, s_len);
    ft_strlcat(new_s, s2, s_len);
    return (new_s);
}
/* int main(void)
{
    char *result;

    result = ft_strjoin("Hello ", "World");
    printf("%s\n", result);
    free(result);

    result = ft_strjoin("", "World");
    printf("%s\n", result);
    free(result);

    result = ft_strjoin("Hello", "");
    printf("%s\n", result);
    free(result);

    result = ft_strjoin("", "");
    printf("%s\n", result);
    free(result);

    result = ft_strjoin(NULL, "World");
    printf("%s\n", result ? result : "NULL");
    free(result);
} */
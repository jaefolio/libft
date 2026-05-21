#include "libft.h"

static int  in_set(char c, char const *set)
{
    size_t i;

    i = 0;
    while (set[i])
    {
        if (c == set[i])
            return (1);
        i++;
    }
    return (0);
}
//Allocates memory (using malloc(3)) and returns a
//copy of ’s1’ with characters from ’set’ removed
//from the beginning and the end.
char    *ft_strtrim(char const *s1, char const *set)
{
    size_t  start;
    size_t  end;
    char    *str;
    
    if (!s1 || !set)
        return (NULL);
    if (ft_strlen(s1) == 0)
    {
        str = ft_substr(s1, 0, 0);
        return (str);
    }
    start = 0;
    end = ft_strlen(s1) - 1;
    while (start <= end && in_set(s1[start], set))
        start++;
    while (end > 0 && end >= start && in_set(s1[end], set))
        end--;
    str = ft_substr(s1, start, end - start +1);
    return str;
}
/* int main(void)
{
    char *result;

    // Normal case
    result = ft_strtrim("  hello  ", " ");
    printf("'%s'\n", result);
    free(result);

    // Multiple chars in set
    result = ft_strtrim("aaahelloaaa", "a");
    printf("'%s'\n", result);
    free(result);

    // Set with multiple chars
    result = ft_strtrim("cbahelloabc", "abc");
    printf("'%s'\n", result);
    free(result);

    // Entire string trimmed
    result = ft_strtrim("aaaa", "a");
    printf("'%s'\n", result);
    free(result);

    // Empty string
    result = ft_strtrim("", "a");
    printf("'%s'\n", result);
    free(result);

    // Empty set
    result = ft_strtrim("hello", "");
    printf("'%s'\n", result);
    free(result);

    // NULL
    result = ft_strtrim(NULL, "a");
    printf("'%s'\n", result ? result : "NULL");
    free(result);
} */
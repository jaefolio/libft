#include "libft.h"

static int  count_words(char const *s, char c)
{
    int in_word;
    int count;

    in_word = 0;
    count = 0;
    while (*s)
    {
        if (*s != c && in_word == 0)
        {
            in_word = 1;
            count++;
        }
        else if (*s == c)
            in_word = 0;
        s++;
    }
    return (count);
}

static int  word_len(char const *s, char c)
{
    int len;
    
    len = 0;
    while (*s && *s != c)
    {
        s++;
        len++;
    }
    return (len);
}

static char *copy_words(char const *s, int len)
{
    int     i;
    char    *word;

    word = malloc(sizeof(char) * (len + 1));
    if (!word)
        return (NULL);
    i = 0;
    while (i < len)
    {
        word[i] = s[i];
        i++;
    }
    word[i] = '\0';
    return (word);
    
}
char    **ft_split(char const *s, char c)
{
    int i;
    int j;
    char    **res;
    if (!s)
        return (NULL);
    res = ft_calloc(count_words(s, c) + 1, sizeof(char *));
    if (!res)
        return (NULL);
    i = 0;
    j = 0;
    while (s[i])
    {
        if (s[i] != c)
        {
            res[j] = copy_words(&s[i], word_len(&s[i], c));
            i += word_len(&s[i], c);
            j++;
        }
        else
            i++;
    }
    return (res);
}
/* int main(void)
{
    char    **res;
    int     i;

    // Normal case
    res = ft_split("Hello World foo", ' ');
    i = 0;
    while (res[i])
        printf("%s\n", res[i++]);
    printf("---\n");

    // Multiple delimiters in a row
    res = ft_split("Hello:::World", ':');
    i = 0;
    while (res[i])
        printf("%s\n", res[i++]);
    printf("---\n");

    // Delimiter at start and end
    res = ft_split("  hello  ", ' ');
    i = 0;
    while (res[i])
        printf("%s\n", res[i++]);
    printf("---\n");

    // Empty string
    res = ft_split("", ' ');
    i = 0;
    while (res[i])
        printf("%s\n", res[i++]);
    printf("---\n");

    // Only delimiters
    res = ft_split("   ", ' ');
    i = 0;
    while (res[i])
        printf("%s\n", res[i++]);
    printf("---\n");

    // Single word
    res = ft_split("hello", ' ');
    i = 0;
    while (res[i])
        printf("%s\n", res[i++]);
    printf("---\n");

    // NULL
    res = ft_split(NULL, ' ');
    printf("%s\n", res ? "not null" : "NULL");
} */
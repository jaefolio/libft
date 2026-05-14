#include "libft.h"

char    *ft_strnstr(const char *str, const char *to_find, size_t len)
{
    size_t  i;
    const char	*s;
	const char	*f;

	if (*to_find == '\0')
		return ((char *)str);
    i = 0;
	while (*str && i < len)
	{
		s = str;
		f = to_find;
		while (*s == *f && *f)
		{
			s++;
			f++;
		}
		if (*f == '\0')
			return ((char *)str);
		str++;
        i++;
	}
	return (0);
}

/* int	main()
{
		const char	str[] = "May the force be with you";
		const char	to_find[] = "be";
        size_t  len = 12;
		printf("%s\n", ft_strnstr(str, to_find, len));

} */
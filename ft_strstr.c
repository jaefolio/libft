#include "libft.h"

char	*ft_strstr(char *str, char *to_find)
{
	char	*s;
	char	*f;

	if (*to_find == '\0')
		return (str);
	while (*str)
	{
		s = str;
		f = to_find;
		while (*s == *f && *f)
		{
			s++;
			f++;
		}
		if (*f == '\0')
			return (str);
		str++;
	}
	return (0);
}

/*
char	*ft_strstr(char *str, char *to_find);

int	main()
{
		char	str[] = "Hello World peace be with you";
		char	to_find[] = "ej";
		printf("%s\n", ft_strstr(str, to_find);

}
*/

#include "libft.h"

// Compares up to n chars of s1 and s2, returns 0 if equal
int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	if (n == 0)
		return (0);
	i = 0;
	while (i < (n - 1) && s1[i] && s1[i] == s2[i])
		i++;
	return ((unsigned char) s1[i] - (unsigned char) s2[i]);
}

/*
int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	main()
{
	char	s1[] = "Hello Ninja";
	char	s2[] = "testing testing";

	printf("%d\n", ft_strncmp(s1, s2, 0));
}
*/

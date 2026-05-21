#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h> //pas oublier de degager
# include <unistd.h>
# include <string.h>
# include <stdlib.h>

//libc functions
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_toupper(int c);
int		ft_tolower(int c);
int		ft_atoi(const char *str);
int		ft_strncmp(char *s1, char *s2, unsigned int n);
int		ft_memcmp(const void *ptr1, const void *ptr2, size_t num);
size_t		ft_strlen(const char *s);
size_t		ft_strlcat(char *dst, const char *src, size_t size);
size_t      ft_strlcpy(char *dst, const char *src, size_t size);
void		ft_bzero(void *s, size_t n);
void        *ft_calloc(size_t nmemb, size_t size);
void		*ft_memset(void *ptr, int x, size_t len);
void		*ft_memcpy(void *dest, const void *src, size_t n);
void		*ft_memmove(void *dest, const void *src, size_t n);
void		*ft_memchr(const void *s, int c, size_t n);
char		*ft_strdup(char *src);
char		*ft_strchr(const char *s, int c);
char		*ft_strrchr(const char *s, int c);
char		*ft_strnstr(const char *str, const char *to_find, size_t len);
//additional functions
char    *ft_substr(char const *s, unsigned int start, size_t len);
char    *ft_strjoin(char const *s1, char const *s2);
char    *ft_strtrim(char const *s1, char const *set);
//set value for size_max
#ifndef SIZE_MAX
# define SIZE_MAX ((size_t)-1)
#endif
#endif
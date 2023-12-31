#include <stdio.h>
#include <stdlib.h>

char    *ft_memset(void *str, int c, size_t size);
void    ft_bzero(void *str, size_t size);
void    *ft_memcpy(void *dest, void *src, unsigned int size);
void    *ft_memccpy(void *dest, void *src, int c, unsigned int size);
size_t  ft_strlen(const char *str); 
char    *ft_strcpy(char *dest, char *src);
char    *ft_strncpy(char *dest, char *src, unsigned int n);
char    *ft_strcat(char *dest, char *src);
char    *ft_strncat(char *dest, char *src, unsigned int n);
int     ft_isalpha(char c);
int     ft_atoi(char *n);
int     ft_strcmp(char *s1, char *s2);
int     ft_strncmp(char *s1, char *s2, unsigned int n);
char    *ft_strstr(char *str, char *to_find);
char    *ft_strnstr(char *str, char *to_find, unsigned int n);
char    *ft_strchr(char *str, char c);
char    *ft_strrchr(char *str, char c);
char    *ft_strdup(char *src);
int     ft_memcmp(void *s1, void *s2, unsigned int n);
void    *ft_memmove(void *dest, void *src, size_t length);
size_t  ft_strlcat(char *dest, char *src, size_t size);
void    *ft_memechr(void *arr, int c, size_t n);
int     ft_isdigit(char c);
int     ft_isalnum(char c);
int     ft_isprint(int c);
char    ft_toupper(char c);
char    ft_tolower(char c);
void    ft_strclr(char *str);
void    *ft_memalloc(size_t size);
void    ft_memdel(void **ap);
char    *ft_strnew(size_t size);
void    ft_striter(char *s, void (*f)(char *));
void    ft_striteri(char *s, void (*f)(unsigned int, char *));
char    *ft_strmap(char const *s, char (*f)(char));
char    *ft_strmapi(char const *s, char (*f)(unsigned int, char));
int     ft_strequ(char const *s1, char const *s2);
int     ft_strnequ(char const *s1, char const *s2, size_t n);
char	*ft_strsub(char const *s, unsigned int start, size_t len);
char    *ft_strjoin(char const *s1, char const *s2);
char    *ft_strtrim(char const *s);




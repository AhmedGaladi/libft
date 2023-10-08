#include "libft.h"

char *ft_strdup(char *src)
{
    char *p;
    int i;

    i = 0;
    if (!(p = (char *)malloc(sizeof(char) * ft_strlen(src) + 1)))
        return (NULL);
    while (*src)
        p[i++] = *src++;
    p[i] = '\0';
    return (p);
}
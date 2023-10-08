#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    char    *result;
    unsigned int  i;

    if(!s || !f)
        return (0);
    result = ft_strnew(ft_strlen(s));
    if(!result)
        return (0);
    i = -1;
    while(s[++i])
        result[i] = f(i, s[i]);
    return (result);
}
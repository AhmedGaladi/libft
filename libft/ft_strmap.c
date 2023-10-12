#include "libft.h"

char    *ft_strmap(char const *s, char (*f)(char))
{
    char    *result;
    int           i;

    if(!s || !f)
        return (0);
    result = ft_strnew(ft_strlen(s));
    if(!result)
        return (0);
    i = -1;
    while(s[++i])
        result[i] = f(s[i]);
    return (result);
}
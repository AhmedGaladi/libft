#include "libft.h"

char *ft_strnew(size_t size)
{
    char *nstr;

    nstr = (char *)malloc(sizeof(char) * size + 1);
    if(!nstr)
        return (NULL);
    ft_strclr(nstr);
    return (nstr);
}
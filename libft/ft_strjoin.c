#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
    size_t s1_len;
    size_t s2_len;
    char *new_str;
    size_t i;
    size_t j;

    s1_len = ft_strlen(s1);
    s2_len = ft_strlen(s2);

    if(!s1 || !s2)
        return (0);

    new_str = ft_strnew(s1_len + s2_len + 1);

    if(!new_str)
        return (0);

    i = -1;
    j = -1;

    while(++i < s1_len)
        *(new_str + i) = *(s1 + i);
    while(++j < s2_len)
        *(new_str + i++) = *(s2 + j);
    *(new_str + i) = '\0';
    return (new_str);
}

#include "libft.h"

char *ft_strrchr(char *str, char c)
{
    int length;

    length = ft_strlen(str);
    while (--length)
    {
        if (str[length] == c)
            return (str + length);
    }
    return (0);
}
#include "libft.h"

char *ft_strchr(char *str, char c)
{
    while (*str++)
    {
        if (*str == c)
            return (str);
    }
    return (0);
}
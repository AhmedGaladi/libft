#include "libft.h"

char *ft_strnstr(char *str, char *to_find, unsigned int n)
{
    int i;
    int j;

    i = 0;
    if (to_find[i] == '\0')
        return (str);
    while (i < n)
    {
        j = 0;
        while (to_find[j] != '\0')
        {
            if (str[i + j] == to_find[j])
                j++;
            else
                break;
        }
        if (to_find[j] == '\0')
            return (str + i);
        i++;
    }
    return (0);
}
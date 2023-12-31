#include "libft.h"

char *ft_strstr(char *str, char *to_find)
{
    int i;
    int j;

    i = 0;
    if (to_find[i] == '\0')
        return (str);
    while (str[i] != '\0')
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
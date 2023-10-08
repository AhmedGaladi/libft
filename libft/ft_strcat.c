#include "libft.h"

char *ft_strcat(char *dest, char *src)
{
    int i;
    int dest_i;

    dest_i = ft_strlen(dest);
    i = 0;
    while (src[i] != '\0')
    {
        dest[dest_i + i] = src[i];
        i++;
    }
    dest[dest_i + i] = '\0';
    return (dest);
}
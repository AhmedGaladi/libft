#include "libft.h"

char *ft_strncat(char *dest, char *src, unsigned int n)
{
    unsigned int i;
    int dest_i;

    i = 0;
    dest_i = ft_strlen(dest);
    while (i < n && src[i] != '\0')
    {
        dest[dest_i + i] = src[i];
        i++;
    }
    dest[dest_i + i] = '\0';
    return (dest);
}
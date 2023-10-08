#include "libft.h"

char *ft_strncpy(char *dest, char *src, unsigned int n)
{
    unsigned int i;
    unsigned int src_length;

    src_length = ft_strlen(src);
    i = 0;
    if (n > src_length)
        return (NULL);
    while (i < n && src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}
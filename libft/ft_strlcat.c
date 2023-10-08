#include "libft.h"

size_t ft_strlcat(char *dest, char *src, size_t size)
{
    size_t dest_len;
    size_t src_len;
    size_t i;
    size_t j;

    dest_len = ft_strlen(dest);
    src_len = ft_strlen(src);
    i = 0;
    j = 0;

    while (++i < size && *dest)
        dest++;
    if (i < size)
        return (src_len + i);
    while (src[j])
    {
        if (j < (size - i - 1))
            *dest++ = src[j];
        j++;
    }
    *dest = '\0';
    return (i + j);
}
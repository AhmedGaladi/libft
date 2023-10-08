#include "libft.h"

void *ft_memccpy(void *dest, const void *src, int c, unsigned int size)
{
    char *dest_p;
    char *src_p;
    unsigned int i;

    dest_p = (char *)dest;
    src_p = (char *)src;
    i = 0;
    while (i++ < size)
    {
        *(dest_p + i) = *(src_p + i);
        if (*(src_p + i) == (char)c)
            return (dest + i + 1);
    }
    return (0);
}
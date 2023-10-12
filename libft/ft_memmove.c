#include "libft.h"

void *ft_memmove(void *dest, void *src, size_t length)
{
    unsigned char *dest_p;
    unsigned char *src_p;
    size_t i;

    dest_p = (unsigned char *)dest;
    src_p = (unsigned char *)src;
    i = 0;
    if (src < dest)
    {
        while (length-- > 0)
            dest_p[length] = src_p[length];
    }
    else
    {
        while (i < length)
        {
            dest_p[i] = src_p[i];
            i++;
        }
    }
    return (dest);
}
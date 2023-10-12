#include "libft.h"

void *ft_memcpy(void *dest, void *src, unsigned int size)
{
    char *char_dest;
    char *char_src;

    char_dest = (char *)dest;
    char_src = (char *)src;
    while (size--)
        *char_dest++ = *char_src++;
    return (dest);
}
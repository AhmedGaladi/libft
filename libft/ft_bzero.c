#include <stdlib.h>

void ft_bzero(void *str, size_t size)
{
    unsigned char *char_str;

    char_str = (unsigned char *)str;
    while (size--)
        *char_str++ = '0';
}
#include <libft.h>

char *ft_memset(void *str, int c, size_t size)
{
    unsigned char *char_str;

    char_str = (unsigned char *)str;
    while (size--)
        *char_str++ = (unsigned char)c;
    return (char_str);
}
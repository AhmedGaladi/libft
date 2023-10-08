#include "libft.h"

void *ft_memechr(void *arr, int c, size_t n)
{
    unsigned char *arr_p;
    unsigned char c_p;
    size_t i;

    str_p = (unsigned char *)arr;
    c_p = (unsigned char)c;
    i = 0;
    while (i < n)
    {
        if (arr_p[i] == c_p)
            return (arr + i);
        i++;
    }
    return (0);
}
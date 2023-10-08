#include "libft.h"

int ft_memcmp(void *s1, void *s2, unsigned int n)
{
    char *str1;
    char *str2;
    unsigned int i;

    str1 = (char *)s1;
    str2 = (char *)s2;
    i = 0;
    while (i < n)
    {
        if (str1[i] != str2[i])
            return (str1[i] - str2[i]);
        i++;
    }
    return (0);
}
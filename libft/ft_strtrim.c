#include "libft.h"

char *ft_strtrim(char const *s)
{
    int start;
    int end;
    int i;
    char *new_str;


    start = 0;
    end = ft_strlen(s) - 1;

    while(s[start] == ' ' ||
          s[start] == '\n' ||
          s[start] == '\t') start++;
    while (s[end] == ' ' ||
           s[end] == '\n' ||
           s[end] == '\t') end--;

    new_str = ft_strnew(end - start + 2);

    i = 0;
    while(i <= end)
    {
        new_str[i] = *(s + start);
        i++;
        start++;
    }
    new_str[i] = '\0';
    return (new_str);
}
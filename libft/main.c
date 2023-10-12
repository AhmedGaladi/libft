#include <stdio.h>
#include "libft.h"

// int _strtrim(char const *s)
// {
//     int start;
//     int end;

//     start = 0;
//     end = ft_strlen(s) - 1;

//     while (s[start] == ' ' ||
//            s[start] == '\n' ||
//            s[start] == '\t') start++;
//     while (s[end] == ' ' ||
//            s[end] == '\n' ||
//            s[end] == '\t') end--;
//     return (end - start);
// }

int main()
{
    char str1[] = "\n \t  asssssssssswwwwwwwwwwwwweet home alabama  \t \n  ";

    printf("%s", ft_strtrim(str1));

    return (0);
}

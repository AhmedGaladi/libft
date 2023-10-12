#include "libft.h"

int ft_atoi(char *str)
{
    int output;
    int sign;

    output = 0;
    sign = 1;
    while (*str > 0 && *str <= 32)
        str++;
    if (*str == '-')
        sign = -1;
    if (*str == '-' || *str == '+')
        str++;
    while (*str)
    {
        if (*str >= '0' && *str <= '9')
            output = output * 10 + (*str - '0');
        else
            break;
        str++;
    }
    return (output * sign);
}
int is_alpha(char c)
{
    return (c >= 'A' && c <= 'Z' || c >= 'a' && c <= 'z');
}

int is_num (char c)
{
    return (c >= '0' && c <= '9');
}

int ft_isalnum(char c)
{
    if(!(is_num(c) || is_alpha(c)))
        return (0);
    return (1);
}
#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*new_str;
	size_t	i;

	if(!s)
		return (0);
	new_str = ft_strnew(len);
	if(!new_str)
		return (0);
	i = 0;
	while(i < len)
		*(new_str + i++) = *(s + start++);
	return (new_str);
}

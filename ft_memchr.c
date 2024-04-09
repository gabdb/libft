

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t	i;
	unsigned char *new_str;

	if (!str)
		return (0);
	new_str = (unsigned char*)str;
	i = 0;
	while(i < n)
	{
		if (new_str[i] == c)
			return ((void *)str + i);
		i++;
	}
	return (0);
}

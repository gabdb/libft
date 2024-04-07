
#include "libft.h"

void    *ft_memset(void *s, int c, size_t n)
{
	unsigned char	*p = (unsigned char*)s;
	int	i;

	i = 0;
	while (n-- > 0)
		p[i++] = c;
}
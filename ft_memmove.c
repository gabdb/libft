
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*ndes = (unsigned char*)dest;
	unsigned char	*nsrc = (unsigned char*)src;
	size_t				i;

	if (ndes > nsrc && ndes <= nsrc + n)
	{
		while (n > 0)
		{
			ndes[n - 1] = nsrc[n - 1];
			n--;
		}
	}
	else
	{
		i = 0;
		while (i < n)
			ndes[i] = nsrc[i++];
	}
	return (dest);
}
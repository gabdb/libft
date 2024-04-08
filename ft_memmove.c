
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*ndes;
	unsigned char	*nsrc;
	size_t				i;

	if (!dest || !src)
		return (0);
	ndes = (unsigned char*)dest;
	nsrc = (unsigned char*)src;
	if (ndes > nsrc)
	{
		while (n > 0)
		{
			ndes[n - 1] = nsrc[n - 1];
			n--;
		}
	}
	else
	{
		i = -1;
		while (++i < n)
			ndes[i] = nsrc[i];
	}
	return (dest);
}

int main(void)
{
	char test[] = "je suis un humain";
	char *dest = ft_memmove(test, test + 4, 5);

	printf("%s\n", dest);

	return (0);
}


#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	unsigned char	*dest_ptr;
	unsigned char	*src_ptr;

	dest_ptr = (unsigned char*)dest;
	src_ptr = (unsigned char*)src;
	i = 0;
	while (i < n)
		dest_ptr[i] = src_ptr[i++];
	return (dest);
}

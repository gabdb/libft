

#include "libft.h"

/*
	p-e utile d'utiliser bzero ou memset au lieu de le faire manuellement
*/

void *ft_calloc(size_t n, size_t size) //n is number of blocks, size is sizeof(block)
{
	void			*ptr;
	unsigned char	*new_ptr;
	int				aantal; //aantal is the number of bytes
	int				i;

	if (n == 0 || size == 0)
		return (0);
	aantal = n * size;
	ptr = (void *)malloc(aantal);
	if (!ptr)
		return (0);
	new_ptr = (unsigned char*)ptr;
	i = 0;
	while (i < aantal)
	{
		*new_ptr++ = 0;
		i++;
	}
	return (ptr);
}



#include "libft.h"

char	*ft_strdup(const char *str)
{
	int		len;
	int		i;
	char	*ptr;

	if (!str)
		return (0);
	len = ft_strlen(str);
	ptr = (char *)malloc(sizeof(char) * (len + 1));
	if (!ptr)
		return (0);
	i = 0;
	while (str[i])
	{
		ptr[i] = str[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

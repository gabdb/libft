/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnyssens <gnyssens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 17:08:20 by gnyssens          #+#    #+#             */
/*   Updated: 2024/04/08 19:02:10 by gnyssens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(const char *str, int c)
{
	const unsigned char	*new_str;
	size_t				i;

	if (!str)
		return (0);
	new_str = (const unsigned char*) str;
	i = 0;
	while (new_str[i])
	{
		if (c == new_str[i])
			return ((char *)str + i);
		i++;
	}
	if (c == 0)
		return ((char *)str + i);
	return (0);
}

/*
int main (void)
{
	const char *str = "Ou est charlie";
	int c = 0;
	printf("%s", ft_strchr(str, c));
}
*/
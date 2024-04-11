/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnyssens <gnyssens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 12:49:58 by gnyssens          #+#    #+#             */
/*   Updated: 2024/04/11 13:04:56 by gnyssens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	void			*ptr;
	unsigned char	*new_ptr;
	int				aantal;
	int				i;

	if (n == 0 || size == 0)
		return (0);
	aantal = n * size;
	ptr = (void *)malloc(aantal);
	if (!ptr)
		return (0);
	new_ptr = (unsigned char *)ptr;
	i = 0;
	while (i < aantal)
	{
		*new_ptr++ = 0;
		i++;
	}
	return (ptr);
}

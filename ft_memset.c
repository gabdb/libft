/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnyssens <gnyssens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 14:44:48 by gnyssens          #+#    #+#             */
/*   Updated: 2024/04/08 14:45:13 by gnyssens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memset(void *s, int c, size_t n)
{
	unsigned char	*p;
	size_t			i;

	if (!s)
		return (0);
	p = (unsigned char*)s;
	i = 0;
	while (n > 0)
	{
		p[i] = (unsigned char)c;
		i++;
		n--;
	}
	return (s);
}
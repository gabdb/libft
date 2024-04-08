/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnyssens <gnyssens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 18:48:17 by gnyssens          #+#    #+#             */
/*   Updated: 2024/04/08 19:09:20 by gnyssens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *str, int c)
{
	const unsigned char	*new_str;
	size_t				ind;

	if (!str)
		return (0);
	new_str = (unsigned char*)str;
	ind = ft_strlen(str) - 1;
	if (c == 0 && ind >= 0)
		return ((char *)(str + ind + 1));
	while (ind >= 0)
	{
		if (c == new_str[ind])
			return ((char *)(str + ind));
		ind--;
	}
	return (0);
}
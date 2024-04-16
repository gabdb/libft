/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnyssens <gnyssens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 12:48:48 by gnyssens          #+#    #+#             */
/*   Updated: 2024/04/15 15:22:07 by gnyssens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	alloc_len;
	char	*result;

	if (!s)
		return (0);
	if (start >= ft_strlen(s) || 0 == *s || 0 == len)
	{
		result = strdup("");
		return (result);
	}
	alloc_len = len;
	if (ft_strlen(s) - start < len)
		alloc_len = ft_strlen(s) - start;
	result = (char *)malloc(alloc_len + 1);
	if (!result)
		return (0);
	(void) ft_strlcpy(result, s + start, alloc_len + 1);
	return (result);
}

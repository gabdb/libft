/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnyssens <gnyssens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 14:48:19 by gnyssens          #+#    #+#             */
/*   Updated: 2024/04/15 16:20:17 by gnyssens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	len_string(char const *s1, char first, char last)
{
	size_t	len;
	size_t	i;

	len = ft_strlen(s1);
	i = 0;
	while (s1[i])
	{
		if (s1[i] == first || s1[i] == last)
			len--;
		i++;
	}
	return (len);
}

static char	*make_trim(char const *s1, char first, char last, int len)
{
	size_t	i;
	size_t	j;
	char	*result;

	result = (char *)malloc(len + 1);
	if (!result)
		return (0);
	i = 0;
	j = 0;
	while (s1[i])
	{
		if (s1[i] != first && s1[i] != last)
		{
			result[j] = s1[i];
			j++;
		}
		i++;
	}
	result[j] = '\0';
	return (result);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	first;
	char	last;
	char	*result;
	size_t	len;

	if (!s1 || !set)
		return (0);
	first = set[0];
	last = set[ft_strlen(set) - 1];
	len = len_string(s1, first, last);
	result = make_trim(s1, first, last, len);
	if (!result)
		return (0);
	return (result);
}
/*
int main(void)
{
	char const phrase[] = "phprasppe !!mit!epuse!p test !";
	char const set[] = "p h:/se@ !";

	char *final = ft_strtrim(phrase, set);
	printf("%s\n", final);
	free(final);

	return (0);
}
*/

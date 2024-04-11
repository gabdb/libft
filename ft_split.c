/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnyssens <gnyssens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 15:27:45 by gnyssens          #+#    #+#             */
/*   Updated: 2024/04/11 16:08:21 by gnyssens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count_words(char const *s, char c)
{
	size_t	count;
	size_t	i;

	count = 0;
	i = 0;
	while(s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != '\0')
			count++;
		while (s[i] != c && s[i])
			i++;
	}
	return (count);
}

static size_t	ft_length_word(char const *str, char c)
{
	size_t	i;

	i = 0;
	while (str[i] != c && str[i] != '\0')
		i++;
	return (i);
}

char **ft_split(char const *s, char c)
{
	size_t	words;
	size_t	i;
	size_t	j;
	size_t	x;
	char	**final;

	words = ft_count_words(s, c);
	final = (char **)malloc(sizeof(char *) * (words + 1));
	i = 0;
	x = 0;
	while(s[i])
	{
		while (s[i] == c)
			i++;
		final[x] = (char *)malloc(ft_length_word(s + i, c) + 1);
		j = 0;
		while (s[i] != c && s[i])
		{
			final[x][j] = s[i];
			i++;
			j++;
		}
		final[x][j] = '\0';
		x++;
	}
	final[x] = NULL;
	return (final);
}

int main(void)
{
	char const phrase[] = " phrase miteuse de test ";
	char sep = ' ';

	char	**result = ft_split(phrase, sep);

	for (int i = 0; i < 4; i++)
		printf("%s\n", result[i]);

	free(result);

	return 0;
}
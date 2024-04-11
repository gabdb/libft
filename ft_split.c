/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnyssens <gnyssens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 15:27:45 by gnyssens          #+#    #+#             */
/*   Updated: 2024/04/11 16:37:16 by gnyssens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

typedef struct s_getal
{
	size_t	i;
	size_t	j;
	size_t	x;
}				t_getal;

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
	char	**final;
	t_getal	getal;

	words = ft_count_words(s, c);
	final = (char **)malloc(sizeof(char *) * (words + 1));
	if (!final)
		return (0);
	getal.i = 0;
	getal.x = 0;
	while(s[getal.i])
	{
		while (s[getal.i] == c)
			getal.i++;
		final[getal.x] = (char *)malloc(ft_length_word(s + getal.i, c) + 1);
		if (!final[getal.x])
			return (0); //idealement faut une fonction qui free tout ici
		getal.j = 0;
		while (s[getal.i] != c && s[getal.i])
			final[getal.x][getal.j++] = s[getal.i++];
		final[getal.x][getal.j] = '\0';
		getal.x++;
	}
	final[getal.x] = NULL;
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

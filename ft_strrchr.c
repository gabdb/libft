/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnyssens <gnyssens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 18:48:17 by gnyssens          #+#    #+#             */
/*   Updated: 2024/04/15 18:37:33 by gnyssens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	size_t			ind;

	if ((ft_strlen(str) == 0 || *str == 0) && c != 0)
		return (0);
	ind = ft_strlen(str);
	if (0 == c)
		return ((char *) str + ind);
	while (ind >= 1)
	{
		if (str[ind - 1] == (char) c)
			return ((char *)str + ind - 1);
		ind--;
	}
	return (0);
}
/*
int main(void)
{
	const char test[] = "wetugertR"; //"ou est le R ici ?";
	char *reponse = ft_strrchr(test, 'R');

	printf("%s\n", reponse);

	return 0;
}
*/

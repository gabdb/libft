/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnyssens <gnyssens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 12:53:57 by gnyssens          #+#    #+#             */
/*   Updated: 2024/04/11 13:12:05 by gnyssens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	length(int n)
{
	int	res;

	if (n == -2147483648)
		return (11);
	res = 1;
	if (n < 0)
	{
		n *= (-1);
		res++;
	}
	while (n > 9)
	{
		res++;
		n = n / 10;
	}
	return (res);
}

static int	exp_len(int nb)
{
	int res;

	res = 0;
	while (nb > 9)
	{
		res++;
		nb = nb / 10;
	}
	return (res);
}

static int	ten_exp(int n)
{
	int res;

	if (n == 0)
		return (1);
	res = 10;
	while (n > 1)
	{
		res *= 10;
		n--;
	}
	return (res);
}

char	*ft_itoa(int n)
{
	char	*result;
	int		i;
	int		len;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	len = length(n);
	result = (char *)malloc(len + 1);
	if (!result)
		return (0);
	i = 0;
	if (n < 0)
	{
		result[i] = '-';
		n *= (-1);
		i++;
	}
	while (i < len)
	{
		result[i] = (n / ten_exp(exp_len(n))) + '0';
		n = (n % ten_exp(exp_len(n)));
		i++;
	}
	result[i] = '\0';
	return (result);
}

int main(void)
{
	int test = 2147483647;
	char *result = ft_itoa(test);
	printf("%s\n", result);
	free(result);
	return 0;
}

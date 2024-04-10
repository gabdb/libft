

#include "libft.h"

int	ft_atoi(const char *str)
{
	int		i;
	long	sign;
	long	res;

	if (!str)
		return (0);
	i = 0;
	sign = 1;
	res = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= (-1);
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + str[i] - '0';
		i++;
	}
	return ((int) sign * res);
}

int main(void)
{
	const char string[] = " \t	\r 2147483647 ..";
	int result = ft_atoi(string);
	printf("%d\n", result);

	return 0;
}
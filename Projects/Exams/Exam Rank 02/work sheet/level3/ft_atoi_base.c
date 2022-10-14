#include <stdio.h>

int	basechr(char s)
{
	if (s >= '0' && s <= '9')
		return(s - '0');
	if (s >= 'A' && s <= 'F')
		return (s - 55);
	if (s >= 'a' && s <= 'f')
		return (s - 87);
	return (0);
}

int	ft_atoi_base(const char *str, int str_base)
{
	int	i;
	int	sign;
	int	res;

	sign = 1;
	i = 0;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i])
	{
		res = (res * str_base) + (basechr(str[i]));
		i++;
	}
	return(res * sign);
}

int main()
{
	printf("%d\n", ft_atoi_base("FF", 16));
}
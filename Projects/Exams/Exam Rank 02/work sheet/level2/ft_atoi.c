#include <stdio.h>

int	ft_atoi(char *s)
{
	int	i;
	int res;
	int sign;

	sign = 1;
	i = 0;
	if (s[i] == '-' || s[i] == '+')
	{
		if (s[i] == '-')
		{
			i++;
			sign = -1;
		}
		else 
			i++;
	}
	while (s[i] <= '9' && s[i] >= '0')
	{
		res = res * 10 + s[i] - '0';
		i++;
	}
	printf("%d\n", res *sign);
	return (res * sign);

}

int main()
{
	char *s = "-123";

	ft_atoi(s);
}
#include <unistd.h>
#include <stdio.h>

int	ft_atoi(char *s)
{
	int	i;
	int	res;

	res = 0;
	i = 0;
	if (s[i] == '+')
		i++;
	while (s[i] <= '9' && s[i] >= '0')
	{
		res = res * 10 + s[i] - '0';
		i++;
	}
	return(res);
}

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		ft_sum(ft_atoi(av[1]));
	}
	write(1, "\n", 1);
}
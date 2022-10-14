#include <stdio.h>
#include <unistd.h>

int	ft_atoi(char *str)
{
	int	i;
	int	res;

	res = 0;
	i = 0;
	if (str[i] == '+' || str[i] == '-')
		return(0);
	while (str[i] <= '9' && str[i] >= '0')
	{
		res = (res * 10) + str[i] - '0';
		i++;
	}
	return (res);
}

void	printhex(int nbr)
{
	char *hex;

	hex = "0123456789abcdef";

	if (nbr > 16)
		printhex(nbr / 16);
	write(1, &hex[nbr % 16], 1);
}

int	main(int ac, char **av)
{
	int	i;

	if (ac == 2)
	{	
		i = ft_atoi(av[1]);
		printhex(i);
	}
	write(1, "\n", 1);
}
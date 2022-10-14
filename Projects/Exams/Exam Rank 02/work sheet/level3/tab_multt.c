#include <stdio.h>
#include <unistd.h>

int	ft_atoi(char *str)
{
	int	i;
	int	res;

	i = 0;
	res = 0;
	if (str[i] == '+')
		i++;
	while(str[i] <= '9' && str[i] >= '0')
	{
		res = (res * 10) + str[i] - '0';
		i++;
	}
	return (res);
}

void	ft_putchar(char s)
{
	write(1, &s, 1);
}

void	ft_putnbr(int nbr)
{
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr = nbr * -1;
	}
	if (nbr > 9)
		ft_putnbr(nbr / 10);
	ft_putchar(nbr % 10 + '0');
}

int	main(int ac, char **av)
{
	int		i;
	int		nbr;
	int		c;
	char	count;

	i = 1;
	c = 0;
	
	nbr = ft_atoi(av[1]);
	if (ac == 2 && nbr <= 238609294)
	{
		while (i <= 9)
		{
			ft_putnbr(i);
			write(1, " x ", 3);
			ft_putnbr(nbr);
			write(1, " = ", 3);
			ft_putnbr(i * nbr);
			write(1, "\n", 1);
			i++;
		}
	}
}
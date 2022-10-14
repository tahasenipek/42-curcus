#include <stdio.h>
#include <unistd.h>

int	check(char c, char *s, int index)
{
	int	i;

	i = 0;
	while (i < index)
	{
		if (s[i] == c)
			return (0);
		i++;
	}
	return (1);
}

int	main(int ac, char **av)
{
	int	i = 0;
	int	c = 0;
	int	k = 0;

	if (ac == 3)
	{
		while (av[1][i])
			i++;
		while (av[2][c])
		{
			av[1][i] = av[2][c];
			i++;
			c++;
		}
		i--;
		while (k <= i)
		{
			if ((check(av[1][k], av[1], k) == 1))
				write(1, &av[1][k], 1);
			k++;
		}

	}
}

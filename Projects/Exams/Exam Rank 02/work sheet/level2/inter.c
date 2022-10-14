#include <stdio.h>
#include <unistd.h>

int	main(int ac, char **av)
{
	int	i;
	int	c;

	c = 0;
	i = 0;
	if (ac == 3)
	{
		while (av[1][i] != av[1][c])
			c++;
		if (av[1][i] == av[1][c])
		{
			
		}
	}
	write(1, "\n", 1);
}
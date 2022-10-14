#include <stdio.h>
#include <unistd.h>

void	rstr_cap(char **av, int a)
{
	int	i;
	int	c;

	i = 1;
	c = 0;
	while (i < a)
	{
		if ((av[i][0] <= 'z' || av[i][0] >= 'a') && (av[i][1] == ' ' || av[i][1] == '\t'))
		{
			av[i][0] -= 32;
			write(1, &av[i][0], 1);
			c++;
		}
		else
			write(1, &av[i][c++], 1);
		while (av[i][c])
		{
			if (av[i][c] <= 'Z' && av[i][c] >= 'A')
				av[i][c] += 32;
			else if ((av[i][c] <= 'z' && av[i][c] >= 'a') && (av[i][c + 1] == ' ' || av[i][c + 1] == '\t' || av[i][c + 1] == '\0'))
			{
				av[i][c] -= 32;
				write(1, &av[i][c++], 1);
			}
			else
				write(1, &av[i][c++], 1);
		}
		c = 0;
		i++;
		write(1, "\n", 1);
	}
}

int	main(int ac, char **av)
{
	int	i;

	i = 0;
	if (ac != 1)
	{
		while(av[i])
			i++;
		rstr_cap(av, i);
	}
	else
		write(1, "\n", 1);
}
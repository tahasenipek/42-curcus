#include <stdio.h>
#include <unistd.h>

int main(int ac, char **av)
{
	int	i;

	i = 0;
	if (ac == 2)
	{
		while (av[1][i] == ' ' || av[1][i] == '\t')
			i++;
		if (av[1][i])
		{
			while (av[1][i] != ' ' && av[1][i] != '\t' && av[1])
			{
				write(1, &av[1][i], 1);
				i++;
			}
		}
	}
	write(1, "\n", 1);
}
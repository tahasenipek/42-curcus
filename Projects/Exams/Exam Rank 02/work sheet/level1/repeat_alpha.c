#include <stdio.h>
#include <unistd.h>

int main(int ac, char **av)
{
	int i = 0;

	if (ac == 2)
	{
		while(av[1][i])
		{
			if (av[1][i] <= 'z' && av[1][i] >= 'a')
			{
				for (int k = 0; k < av[1][i] - 96; k++)
					write(1, &av[1][i], 1);
			}
			else if (av[1][i] <= 'z' && av[1][i] >= 'a')
			{
				for (int j = 0; j < av[1][i] - 64; j++)
					write(1, &av[1][i], 1);
			}
			else
				write(1, &av[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}
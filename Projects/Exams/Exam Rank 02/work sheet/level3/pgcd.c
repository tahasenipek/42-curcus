#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
	int	nbr1 = atoi(av[1]);
	int	nbr2 = atoi(av[2]);

	if (ac == 2)
	{
		if (nbr1 > 0 && nbr2 > 0)
		{
			while (nbr1 != nbr2)
			{
				if (nbr1 > nbr2)
					nbr1 = nbr1 - nbr2;
				else
					nbr2 = nbr2 - nbr1;
			}
			printf("%d", nbr1);
		}
	}
	printf("\n");
}
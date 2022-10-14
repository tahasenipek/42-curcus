#include <stdio.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
	int	nbr = atoi(av[1]);
	int	i;

	i = 2;
	if (ac == 2)
	{
		while(i <= nbr)
		{
			if (nbr % i == 0)
			{
				printf("%d", i);
				if (nbr == i)
					break;
				printf("*");
				nbr = nbr / i;
				i = 2;
			}
			i++;
		}
	}
	printf("\n");
}
#include <stdio.h>
#include <unistd.h>

int	hidenp(char *s1, char *s2)
{
	int	i;
	int	c;

	c = 0;
	i = 0;
	while (s2[i])
	{
		if (s2[i] == s1[c])
		{
			c++;
		}
		if (s1[c] == '\0')
			return(1);
		i++;
	}
	return (0);
}

int	main(int ac, char **av)
{
	if (ac == 3)
	{
		if (hidenp(av[1], av[2]))
			write(1, "1", 1);
		else
			write(1, "0", 1);
	}
	write(1, "\n", 1);
}
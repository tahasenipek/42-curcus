#include <stdio.h>
#include <unistd.h>

void	epur(char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if ((s[i] == ' ' || s[i] == '\t') && (i != 0) && (s[i + 1] != '\0'))
		{
			write(1, " ", 1);
			i++;
		}
		while (s[i] == ' ' || s[i] == '\t')
			i++;
		if (s[i])
			write(1, &s[i++], 1);
	}
}

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		epur(av[1]);
	}
	write(1, "\n", 1);
}
#include <unistd.h>
#include <stdio.h>

void	expand(char *s)
{
	int	i;

	i = 0;
	while(s[i])
	{
		if (s[i + 1] == ' ' || s[i + 1] == '\t')
		{
			write(1, &s[i], 1);
			write(1, "   ", 3);
			i++;
		}
		while(s[i] == ' ' || s[i] == '\t')
			i++;
		write(1, &s[i++], 1);
	}
}

int	main(int ac , char **av)
{
	if (ac == 2 && av[1])
	{
		expand(av[1]);
	}
	write(1, "\n", 1);
}
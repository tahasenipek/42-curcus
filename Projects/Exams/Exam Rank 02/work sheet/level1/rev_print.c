#include <stdio.h>
#include <unistd.h>

void	revprint(char *s)
{
	int	i = 0;
	while (s[i] != '\0')
		i++;
	i--;
	while (i >= 0)
	{
		write(1, &s[i], 1);
		i--;
	}
}

int main(int ac, char **av)
{
	if (ac == 2)
	{
		revprint(av[1]);
	}
	write(1, "\n", 1);
}
#include <stdio.h>
#include <unistd.h>


void	lastword(char *s)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == ' ' && (s[i + 1] >= 33 && s[i + 1] <= 126))
		{
			j = i + 1;
		}
		i++;
	}
	while (s[j] >= 33 && s[j] <= 127)
		write(1, &s[j++], 1);
}

int main(int ac, char **av)
{

	if (ac == 2)
	{
		lastword(av[1]);
	}
	write(1, "\n", 1);
}
#include <stdio.h>
#include <unistd.h>

int main(int ac, char **av)
{
	char *s;
	int	i;

	i = 0;
	s = av[1];
	if (ac == 2)
	{
		while (s[i])
		{
			if ((s[i] >= 'a' && s[i] <= 'y') || (s[i] >= 'A' && s[i] <= 'Y'))
			{
				s[i] = s[i] + 1;
				write(1, &s[i], 1);
			}
			else if (s[i] == 'z' || s[i] == 'Z')
			{
				s[i] = s[i] - 57;
				write(1, &s[i], 1);
			}
			else
				write(1, &s[i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}
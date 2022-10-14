#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void	putline(char *s, char **av)
{
		i = 0;
		len = 0;
		while(av[1][i])
		{
			if (av[1][i] >= 'A' && av[1][i] <= 'Z')
			{
				s[len] = '_';
				i++;
				len++;
			}
			s[len] = av[1][i];
			i++;
			len++;
			}
		}
		i = 0;
		while (s[i])
			write(1, &s[i++], 1);

}

int main(int ac, char **av)
{
	int		i;
	char	*s;
	int		len;

	len = 0;
	i = 0;
	if (ac == 2)
	{
		while(av[1][i])
		{
			if (av[1][i] >= 'A' && av[1][i] <= 'Z')
			{
				len++;	
				i++;
			}		
			i++;
		}
		printf("i %d\n", i + len);
		s = malloc(sizeof(char) * i + len + 1);
		s[i] = '\0';
		putline(s, av);
	}
	write(1, "\n", 1);
}
#include <stdio.h>
#include <stdlib.h>

int	max(int	*tab, unsigned int len)
{
	int	i;
	int	max;

	i = 0;
	max = -2147483648;
	if (!tab)
		return (0);
	while (i < len)
	{
		if (tab[i] > max)
			max = tab[i];
		else
			i++;
	}
	printf("MAX %d\n", max);
	return (max);
}

int	main()
{
	int	*s;
	int	i;
	int	a;
	int	b;
	int	c;

	s = malloc(sizeof(int) * 4);
	s[0] = -12345;
	s[1] = -635;
	s[2] = -12334;
	s[3] = -123;
	max(s, 4);
}
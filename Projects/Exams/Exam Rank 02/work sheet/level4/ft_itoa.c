#include <stdlib.h>
#include <stdio.h>

char	*ft_itoa(int nbr)
{
	int		n;
	int		len;
	char	*s;

	n = nbr;
	if (nbr < 0)
		len++;
	if (nbr == -2147483648)
		return ("-2147483648");
	while (n)
	{
		n = n / 10;
		len++;
	}
	s = malloc(sizeof(char) * len + 1);
	s[len] = '\0';
	if (nbr < 0)
	{
		s[0] = '-';
		nbr = nbr * -1;
	}
	while (nbr)
	{
		s[--len] = (nbr % 10) + '0';
		nbr = nbr/10;
	}
	return (s);
}

int	main(void)
{
	int	i;

	i = 123;
	ft_itoa(i);
}
#include <stdio.h>
#include <stdlib.h>

#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strrev(char *str)
{
	char f;
	char b;
	int i;
	int c;

	b = 0;
	i = 0;
	f = 0;
	c = ft_strlen(str) / 2;
	while (i < c)
	{
		f = str[i];
		b = str[ft_strlen(str) - i - 1];
		str[i] = b;
		str[ft_strlen(str) - i - 1] = f;
		f = 0;
		b = 0;
		i++;
	}
	return(str);
}

int main()
{
	char str[5] = "taha";

	printf("%s\n", ft_strrev(str));
}

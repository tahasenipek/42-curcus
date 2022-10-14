#include <stdio.h>

int	ft_strlen(char *str)
{
	int i = 0;

	while (str[i])
		i++;
	return(i);
}

int main()
{
	char *s = "taha mehmet senipek";
	printf("%d\n", ft_strlen(s));
}
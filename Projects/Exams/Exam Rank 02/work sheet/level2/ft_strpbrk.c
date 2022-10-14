#include <string.h>
#include <stdio.h>

char *ft_strpbrk(const char *s1, const char *s2)
{
	int	i;

	i = 0;
	while (*s1)
	{
		i = 0;
		while (s2[i])
		{
			if (s2[i] == *s1)
				return ((char *)s1);
			i++;
		}
		s1++;
	}
	return (NULL);
}

int	main()
{
	char *s1;
	char *s2;

	s1 = "taha sendsaipek";
	s2 = "h";

	printf("%s\n", strpbrk(s1, s2));
	printf("%s\n", ft_strpbrk(s1, s2));
}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strdup(char *s)
{
	int	i;
	char *ns;

	i = 0;
	while(s[i])
		i++;
	ns = malloc(sizeof(char) * i + 1);
	ns[i] = '\0';
	i = 0;
	while (s[i])
	{
		ns[i] = s[i];
		i++;
	}
	return (ns);
}

int	main()
{
	char *s;

	s = "taha sen121edac 213 12ipek";
	printf("%s\n", strdup(s));
	printf("%s\n", ft_strdup(s));
}
#include <stdio.h>
#include <string.h>

char *ft_strcpy(char *src, char *dst)
{
	int	i = 0;

	printf("here1\n");
	while (src[i] != '\0')
	{	
		printf("%c\n", src[i]);
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return(dst);
}

int main()
{
	char *s1;
	char s2[10];
	char *s;
	
	s1 = "lalay";
	printf("here\n");
	s = ft_strcpy(s1, s2);
}
#include <stdio.h>
#include <string.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
	size_t	i;
	size_t	re;

	i = 0;
	while(s[i] != '\0')
	{
		re = 0;
		while (reject[re])
		{
			if (reject[re] == s[i])
				return(i);
			re++;
		}
		i++;
	}	
	return (i);
}


int main()
{
	char *s1;
	char *s2;

	s1 = "cklajsd";
	s2 = "zzzkzz";
	printf("%lu\n", strcspn(s1, s2));
	printf("%zu\n", ft_strcspn(s1, s2));
}
#include <string.h>
#include <stdio.h>

/* int	ft_strspn(const char *s1, const char *accept)
{

} */

int	main()
{
	char	*s1;
	char	*s2;

	s1 = "tahasenipek";
	s2 = "zenipektaha";

	printf("%lu\n", strspn(s1 , s2));
}
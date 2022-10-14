#include <stdio.h>

unsigned int lcm(unsigned int a, unsigned int b)
{
	unsigned int	n;

	if (a >b)
		n = a;
	else
		n = b;
	while(1)
	{
		if (n % a == 0 && n % a == 0)
			return (n);
		++n;
	}
	return(0);
}

int main()
{
	int	a = 1;
	int	b = 12;
	printf("%d\n",lcm(a, b));
}

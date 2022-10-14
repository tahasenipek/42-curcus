#include <stdio.h>
#include <unistd.h>

void	print_bits(unsigned char octet)
{
	int	i;

	i = 8;
	while (i > 0)
	{
		if ((octet >> i) & 1)
			write(1, "1", 1);
		else
			write(1, "0", 1);
		i--;
	}
	write(1, "\n", 1);
}

int	main()
{
	char a;

	a = 'a';
	print_bits(a);
}
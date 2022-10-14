#include <stdio.h>
#include <unistd.h>

void	ft_putnbr(int i)
{
	char *s = "0123456789";

	if (i > 9)
		ft_putnbr(i / 10);
	write(1, &s[i % 10], 1);
}

int main()
{
	int	i = 1;

	while (i <= 100)
	{
		if (i % 3 == 0)
		{
			write(1,"fizz\n", 5);
			i++;
		}
		else if (i % 5 == 0)
		{
			write(1, "buzz\n", 5);
			i++;
		}
		else
		{
			ft_putnbr(i++);
			write(1, "\n", 1);
		}
	}

}
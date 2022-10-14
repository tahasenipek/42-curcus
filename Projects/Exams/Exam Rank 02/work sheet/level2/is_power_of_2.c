#include <stdio.h>

int	is_power_of_2 (unsigned int nbr)
{
	if (nbr  % 2 == 0)
		return (1);
	else
		return (0);
}

int main()
{
	printf("%d\n",is_power_of_2(122));
}
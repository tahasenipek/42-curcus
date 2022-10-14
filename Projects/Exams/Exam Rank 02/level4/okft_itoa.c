#include <stdio.h>
#include <stdlib.h>

char    *ft_itoa(int nbr)
{
	int     len;
	long	n_tmp;
	char	*str;

	len = 0;
    n_tmp = nbr;

    if (nbr < 0)
        len++;
    while (n_tmp)
    {
        n_tmp = n_tmp / 10;
        len++;
    }
    str = malloc(sizeof(char) * len  + 1);
    if (nbr == 0)
    {
        str[0] = '0';
        return (str);
    }
    if (nbr < 0)
    {
        nbr *= -1;
        str[0] = '-';
    }
    str[len] = '\0';
    while (nbr)
    {
        str[--len] = (nbr % 10) + '0';
        nbr /= 10;
    }
    return (str);
}

int main (void)
{
    int     i;
    char    *s;
    i = 123;
    printf("%s itoa\n", ft_itoa(i));
}
#include <stdio.h>
#include <unistd.h>

void    ft_putnbr(int i)
{
    char    digit;

    if (i >= 10)
        ft_putnbr(i / 10);
    digit = (i % 10) + '0';
    write(1, &digit, 1);
}

int main(int ac, char **av)
{
    int i;
    int c;
    int sum;

    c = 0;
    i = 1;
    if (ac != 1)
    {
        while(av[i])
        {
            while(av[i][c] != '\0')
                c++;
            i++;
        }
        sum = i - 1;
        ft_putnbr(sum);
    }
    write (1, "\n", 1);
}
#include <stdio.h>
#include <unistd.h>
#include <string.h>

int ft_atoi(char *s)
{
    int i;
    int res;

    res = 0;
    i = 0;
    if (s[i] == '+')
        i++;
    while (s[i] <= '9' && s[i] >= '0')
    {
        res = res * 10 + s[i] - '0';
        i++;
    }
    return (res);
}

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_putnbr(int c)
{
    if (c / 10 > 0)
        ft_putnbr(c / 10);
    ft_putchar(c % 10 + '0');
}

int main(int ac, char **av)
{
    int num;
    int c;
    int res;

    res = 0;
    c = 1;
    num = 0;
    if (ac == 2 && av[1][0] != '-')
    {
        if (ft_atoi(av[1]) <= 238609295)
        {
            num = ft_atoi(av[1]);
            while (c <= 9)
            {
                ft_putnbr(c);
                write(1, " x ", 3);
                ft_putnbr(num);
                res = num * c;
                write(1, " = ", 3);
                ft_putnbr(c * num);
                write(1, "\n", 1);
                c++;

                res = 0;
            }

        }
        return (0);
    }
    write(1, "\n", 1);
}

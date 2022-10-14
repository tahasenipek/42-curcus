#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int ft_atoi(char *s)
{
    int res;
    int minus;

    res = 0;
    minus = 0;
    if (*s == '+' || *s == '-')
    {
        if (*s == '-')
            minus = -1;
        s++;
    }
    while (*s >= '0' && *s <= '9')
    {
        res = res * 10 + *s - '0';
        s++; 
    }
    if (minus == - 1)
        return(res * minus);
    else
        return(res);
}

int *ft_range(int s, int i)
{
    int *str;
    int c;

    c = 0;
    if (s > i)
        c = s - i;
    else
        c = i - s;
    str = malloc(sizeof(int) * c);
    while(c >= 0)
    {
        str[c] = i;
        if (s > i)
            i++;
        else
            i--;
        c--;
    }    
    return (str);
}

int main(int ac, char **av)
{
    if (ac == 3)
    {
        ft_range (ft_atoi(av[1]), ft_atoi(av[2]));
    }
    write(1, "\n", 1);
}
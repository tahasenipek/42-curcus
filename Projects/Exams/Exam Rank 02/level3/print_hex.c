#include <stdio.h>
#include <unistd.h>

void    print_hex(int i)
{
    char *s = "0123456789abcdef";

    if(i >= 16)
        print_hex(i / 16);
    write(1, &s[i % 16], 1);
}

int ft_atoi(char *s)
{
    int res;
    
    res = 0;
    if (*s == '+')
        s++;
    while (*s <= '9' && *s >= '0')
    {
        res = res * 10 + *s - '0';
        s++;
    }
    return (res);
}

int main(int ac, char **av)
{
    int i;

    if (ac == 2 && av[1][0] != '-')
    {
        i = ft_atoi(av[1]);
        print_hex(i);
    }
    write(1, "\n", 1);
}
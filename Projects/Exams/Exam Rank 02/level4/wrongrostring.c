#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void    serostr(char **av, int i, int m)
{
    int c;

    c = 0;
    while (av[1][i])
    {
        if (av[1][i] == ' ' || av[1][i] == '\t')
        {
            if (av[1][i] == '\t')
               av[1][i] = ' ';
            write(1, &av[1][i], 1); 
        }
        else
            write(1, &av[1][i], 1);
        i++;
    }
    if (av[1][i] == '\0')
    {
        write(1, " ", 1);
        i = 0;
        while (av[1][i] && i < m)
        {
            while (av[1][i] == ' ' || av[1][i] == '\t')
                i++;
            write(1, &av[1][i], 1);
            i++;
        }
    }
}

void    ft_rostring(char **av)
{
    int i;
    int tmp;
    int m;

    m = 0;
    tmp = 0;
    i = 0;
    while (av[1][i])
    {
        while (av[1][i] == ' ' || av[1][i] == '\t')
        {
            i++;
            if (av[1][i] != ' ' || av[1][i] != '\t')
            {
                m = i - 1;
                tmp = 1;
                serostr(av, i, m);
            }
        }
        i++;
    }
    write(1, "\n", 1);
}

int main(int ac, char **av)
{
    int i;

    i = 0;
    if (ac > 1)
    {
        if (ac > 2)
        {
            while(av[1][i] && (av[1][i] == ' ' || av[1][i] == '\t'))
                i++;
            write(1, av[1], i);
        }
        else if (ac == 2)
            ft_rostring(av);
    }
    write(1, "\n", 1);
}
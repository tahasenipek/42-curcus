#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void    writers(char *wriall)
{
    int i;

    i = 0;
    while (wriall[i])
    {
        write(1, &wriall[i], 1);
        i++;
    }
}

int strcont(char **av)
{
    int i;
    int c;

    c = 0;
    i = 0;
    while (av[1][i])
    {
        if (av[1][i] == ' ' || av[1][i] == '\t')
            i++;
        else
        {
            c++;
            i++;
        }
    }
    printf("C == %d\n", c);
    return (c);
}

char    *putsome(char **av, int tot)
{
    char    *all;
    int     i;
    int     s;

    i = 0;
    s = 0;
    all = malloc(sizeof(char) * tot + 1);
    while (av[1][i])
    {
        if (av[1][i] == ' ' || av[1][i] == '\t')
        {
            i++;
            s = 1;
        }
        else
        {
            if (s == 1)
                all[i] = ' ';
            else
                all[i] = av[1][i];
            i++;
        }
        s = 0;
    }
    return (all);
}


int main(int ac, char **av)
{
    int i;
    int tot;
    char *wriall;

    tot = 0;
    i = 0;
    if (ac == 2)
    {
        tot = strcont(av);
        wriall = putsome(av, tot);
        writers(wriall);
    }
    write(1, "\n", 1);
}
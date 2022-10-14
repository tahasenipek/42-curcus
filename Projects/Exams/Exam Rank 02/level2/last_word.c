#include <stdio.h>
#include <unistd.h>

int main(int ac, char **av)
{
    int i;
    int c;
    int space;

    space = 0;
    c = 0;
    i = 0;
    if (ac == 2)
    {
        while (av[1][i])
        {
            i++;
            if (av[1][i] == ' ' || av[1][i] == '\t')
                space = 1;
        }
        i--;
        if (space == 1)
        {
            while (av[1][i] != ' ' && av[1][i] != '\t')
                i--;
            i++;
            while (av[1][i])
                write(1, &av[1][i++], 1);
            if (av[1][i] == ' ' || av[1][i] == '\t')
                return (0);
        }
        if (space == 0)
        {
            i = 0;
            while (av[1][i])
                write(1, &av[1][i++], 1);
        }
    }
    write(1, "\n", 1);
}
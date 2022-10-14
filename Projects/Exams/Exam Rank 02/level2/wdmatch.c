#include <stdio.h>
#include <unistd.h>

int main(int ac, char **av)
{
    int c;
    int i;

    i = 0;
    c = 0;
    if (ac == 3)
    {
        while (av[2][c])
        {
            if (av[1][i] == av[2][c])
                i++;
            c++;
        }
        if (av[1][i] == '\0')
        {
            i = 0;
            c = 0;
            while (av[2][c])
        {
            if (av[1][i] == av[2][c])
            {
                write(1, &av[1][i], 1);
                i++;
            }
            c++;
        }
        }
    }
    write(1, "\n", 1);
}
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(int ac, char **av)
{
    int c;
    int temp;

    c = 0;
    if (ac == 2)
    {
        while (av[1][c])
        {
            if (av[1][c] >= 'A' && av[1][c] <= 'Y')
            {
                temp = av[1][c] + 1;
                write (1, &temp, 1);
                c++;
            }
            else if (av[1][c] >= 'a' && av[1][c] <= 'y')
            {
                temp = av[1][c] + 1;
                write (1, &temp, 1);
                c++;
            }
            else if (av[1][c] == 'Z' || av[1][c] == 'z')
            {
                temp = av[1][c] - 25;
                write (1, &temp, 1);
                c++;
            }
            else
            {
                write(1, &av[1][c], 1);
                c++;
            }
        }
        write(1, "\n", 1);
    }
}
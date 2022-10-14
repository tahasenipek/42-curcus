#include <stdio.h>
#include <unistd.h>

int main(int ac , char **av)
{
    int     c;
    char    temp;

    c = 0;
    if (ac == 2)
    {
        while (av[1][c])
        {
            if (av[1][c] >= 97 && av[1][c] <= 122)
            {
                av[1][c] -= 97;
                temp = 122 - av[1][c];
                write(1, &temp, 1);
                c++;
            }
            else if (av[1][c] >= 65 && av[1][c] <= 90)
            {
                av[1][c] -= 65;
                temp = 90 - av[1][c];
                write(1, &temp, 1);
                c++;
            }
            else
            {
                write(1, &av[1][c], 1);
                c++;
            }
        }
    }
    write(1, "\n", 1);
}
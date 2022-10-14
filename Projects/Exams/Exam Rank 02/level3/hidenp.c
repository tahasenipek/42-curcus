#include <stdio.h>
#include <unistd.h>

int main(int ac, char **av)
{
    int c;
    int i;
    int res;

    i = 0;
    c = 0;
    if (ac == 3)
    {
        while (av[1][c])
            c++;
        res = c;
        c = 0;
        while (av[2][i])
        {
            if (av[2][i] == av[1][c])
            {
                c++;
                res--;
                i++;
            }
            else
                i++;
        }
        if (res == 0)
            write(1, "1", 1);
        else
            write(1, "0", 1);
    }
    write(1, "\n", 1);
}
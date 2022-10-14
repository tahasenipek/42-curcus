#include <stdio.h>
#include <unistd.h>

int main(int ac, char **av)
{
    int     i;
    char    temp;

    i = 0;
    if (ac == 2)
    {
        while (av[1][i])
        {
            if ((av[1][i] >= 'A' && av[1][i] <= 'M') \
            || (av[1][i] >= 'a' && av[1][i] <= 'm'))
            {
                temp = av[1][i] + 13;
                write(1, &temp, 1);
            }
            else if ((av[1][i] >= 'N' && av[1][i] <= 'Z') \
            || (av[1][i] >= 'n' && av[1][i] <= 'z'))
            {
                temp = av[1][i] - 13;
                write(1, &temp, 1);
            }
            else
                write(1, &av[1][i], 1);
            i++;
        }
    }
}
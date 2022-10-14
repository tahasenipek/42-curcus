#include <stdio.h>
#include <unistd.h>

int tstrlen(char *s)
{
    int i;

    i = 0;
    while(s[i])
        i++;
    return (i);
}

int main(int ac, char **av)
{
    int c;
    char temp;
    char tmp;

    c = 0;
    tmp = av[2][0];
    temp = av[3][0];
    if ((ac == 4) && (tstrlen(av[2]) == 1) && (tstrlen(av[2]) == 1))
    {
        while(av[1][c])
        {
            if (av[1][c] == tmp)
            {
                av[1][c] = temp;
                write(1, &av[1][c], 1);
                c++;
            }
            else
            {
                write (1, &av[1][c], 1);
                c++;
            }
        }
    }
    write(1, "\n", 1);
}
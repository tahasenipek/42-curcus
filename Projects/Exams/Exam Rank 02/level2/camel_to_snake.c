#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void    punderline(char *alline, char **av)
{
    int i;
    int c;

    c = 0;
    i = 0;
    while (av[1][i])
    {
        if (av[1][i] <= 90 && av[1][i] >= 65)
        {
            alline[c] = '_';
            c++;
        }
        alline[c++] = av[1][i++];
    }
    alline[c] = '\0';
    c = 0;
    while (alline[c])
        write(1, &alline[c++], 1);
}

int main(int ac, char **av)
{
    int     c;
    char    *alline;
    int     uline;
    
    c = 0;
    uline = 0;
    if (ac == 2)
    {
        while (av[1][c])
        {
            if (av[1][c] <= 90 && av[1][c] >= 65)
            {
                uline++;
                c++;
            }
            c++;
        }
        alline = malloc(sizeof(char) * uline + c + 1);
		printf("%d\n", uline + c);
        punderline(alline, av);
    }
    write (1, "\n", 1);
}
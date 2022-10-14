#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(int ac, char **av)
{
    int i;
    int c;
    char *nwstr;

    i = 1;
    if (ac == 2)
    {   
        c = 0;
        while (av[1][c])
            c++;
        nwstr = malloc(sizeof(char) * c + 1);
        i = 0;
        while ( 0 < c)
        {
            nwstr[i] = av[1][--c];
            i++;
        }
        nwstr[i] = '\0';
		i = 0;
    }
    write(1, "\n", 1);
}
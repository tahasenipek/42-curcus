#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>

int main(int ac, char **av)
{
    int nbr1;
    int nbr2;

    if (ac == 3)
    {
        if ((nbr1 =atoi(av[1])) > 0 && (nbr2 = atoi(av[2])) > 0)
        {
            while (nbr1 != nbr2)
            {
                if (nbr1 > nbr2)
                    nbr1 -=nbr2;
                else
                    nbr2 -= nbr1;
            }
            printf("%d\n", nbr1);
        }
    }
    write(1, "\n", 1);
    return(0);
}


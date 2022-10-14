#include <stdio.h>
#include <unistd.h>


void    capistr(char **av, int c)
{
    int i;

    i = 0;
    while (av[c][i])
    {
        if (av[c][0] <= 'z' && av[c][0] >= 'a')
        {
            av[c][i] = av[c][i] - 32;
            i++;
        }
        else if (av[c][i] >= 'A' && av[c][i] <= 'Z')
        {
            if (av[c][i - 1] == ' ' || av[c][i - 1] == '\t' || i == 0)
                i++;
            else
                av[c][i] = av[c][i] + 32;
        }
        else if (av[c][i] == ' ' || av[c][i] == '\t')
            i++;
        else if (av[c][i] >= 'a' && av[c][i] <= 'z')
        {
            if (av[c][i - 1] == ' ' || av[c][i - 1] == '\t')
            {
                av[c][i] = av[c][i] - 32;
                i++;
            }
            else
                i++;
        }
        else
            i++;
    }
}

int main(int ac, char **av)
{
    int i;
    int c;

    c = 1;
    i = 0;
    if (ac != 1)
    {
        while (av[i])
            i++;
        while (c < i)
            capistr(av, c++);
    }
    write(1, "\n", 1);
}




















/* void    capistr(char **av, int c)
{
    int i;
    int res;

    res = 0;
    i = 0;
    while (av[c][i])
    {
        if (av[c][i] >= 'a' && av[c][i] <= 'z')
        {
            printf("AV == %c\n", av[c][i]);
            if (av[c][i + 1] == ' ' || av[c][i + 1] == '\t')
            {
                av[c][i] -= 32;
                i++;
            }

        }
        getchar();
        while (av[c][i] == ' ' || av[c][i] == '\t')
        {
            printf("AV == %c\n", av[c][i]);
            i++;
            res = 1;
        }
        if ((av[c][i] >= 'a' && av[c][i] <= 'z') && (res = 1))
        {
            av[c][i] -= 32;
            i++;
        }
        else if (av[c][i] >= 'A' || av[c][i] <= 'Z')
        {
            av[c][i] -= 32;
        }
        else
            i++;
    }
    printf("AV == %s", av[c]);
} */
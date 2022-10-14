#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int ccheck(int c , int i)
{
    int m;
    int sum;

    m = 0;
    printf("c == %d\n", c);
    printf("i == %d\n", i);
    while (c <= i)
    {
        if (c % 2 != 0)
        {
            printf("c == %d\n", c); 
            m += 1; 
        }
        if (c % 3 != 0)
            m += 1; 
        if(c % 5 != 0)
            m += 1;
        if (c % 7 != 0)
            m += 1;
        if (m == 4)
        {
            sum = c;
            printf("SON C == %d\n", c);
            getchar();
            return (sum);
        }
        printf("c == %d\n", c);
        c++;
    }
    return (sum);
}

int ft_atoi(char *av)
{
    int i;
    int res;
    
    i = 0;
    res = 0;
    while (av[i] == ' ' || (av[i] <= 13 && av[i] >= 9))
        i++;
    while (av[i] <= '9' && av[i] >= '0')
    {
        res = res * 10 + av[i] - '0';
        i++;
    }
    return (res);
}


int main(int ac, char **av)
{
    int i;
    int c;
    int sum;

    c = 1;
    i = 0;
    if (ac == 2 && av[1][0] != '-')
    {
        if (av[1][0])
            i = ft_atoi(av[1]);
        while (c <= i)
        {
            sum += ccheck(c, i);
            c++;
        }
        printf("sum == %d\n", sum);
    }
    if (ac != 2)
        write(1, "0", 1);
    write(1, "\n", 1);
    return(0);
}

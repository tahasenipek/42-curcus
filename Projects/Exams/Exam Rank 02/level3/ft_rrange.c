#include <stdio.h>
#include <stdlib.h>

int ft_atoi(char *s)
{
    int res;
    int min;
    
    min = 1;
    res = 0;
    if (*s == '+' || *s == '-')
    {
        if (*s == '-')
            min = -1;
        s++;
    }
    while (*s >= '0' && *s <= '9')
    {
        res = res * 10 + *s - '0';
        s++;
    }
    printf("RES %d\n", res *min);
    return(res * min);
}

int *ft_rrange(int start, int end)
{
    int len;
    int *str;
    int c;
    int res;

    res = 0;
    c = 0;
    if (start > end)
    {
        len = start - end;
        res = 1;
    }
    else
        len = end - start;
    str = malloc(sizeof(int) * len);
    while (len >= 0)
    {
        if (res == 1)
        {
            str[c] = end;
            printf("AV %d\n", str[c]);
            end++;
            c++;
        }
        else if (res == 0)
        {
            str[c] = end;
            printf("AV %d\n", str[c]);
            end--;
            c++;
        }
        len--;
    }
    return (str);
}

int main(int ac, char **av)
{
    if (ac == 3)
    {
        ft_rrange(ft_atoi(av[1]), ft_atoi(av[2]));
    }
}

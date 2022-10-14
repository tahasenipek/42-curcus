#include <stdio.h>

int ft_atoi(char *s)
{
    int i;
    int res;

    res = 0;
    i = 1;
    while (*s == ' ' || (*s >= 9  && *s <= 13))
        s++;
    if (*s == '-')
        i = -1;
    while (*s <= '9' && *s >= '0')
    {
        res = res * 10 + *s - '0';
        s++;
    }
    return(res * i);
}

int main (void)
{
    char *s;

    s = "123";
    printf("%d",ft_atoi(s));
}
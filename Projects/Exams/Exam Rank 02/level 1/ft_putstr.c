#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


void    ft_putstr(char *s)
{
    char    temp;
    int     i;

    i = 0;
    while(s[i])
    {
        temp = s[i];
        write(1, &temp, 1);
        i++;
    }
}

int main()
{
    char *s;

    s = "taha";
    ft_putstr(s);
}
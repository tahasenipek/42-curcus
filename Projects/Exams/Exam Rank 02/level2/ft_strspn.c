#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int ft_strspn(char *s1, char *s2)
{
    int i;
    int c;

    c = 0;
    i = 0;
    while (s2[c])
    {
        while (s1[i] == s2[c] && (s2[i] != ' ' && s2[i] != '\0'))
            i++;
        c++;
    }
    return (i);
}

int main()
{
    char    *s1;
    char    *s2;
    int     i;
    int     ii;

    s1 = "taha";
    s2 = "mehmet taha senipek";
    i = strspn(s1, s2);
    ii = ft_strspn(s1, s2);
    printf(" Lenght %d  self %d\n", i, ii);
}
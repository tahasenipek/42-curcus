#include <stdio.h>

int ft_strcmp(char *s1, char *s2)
{
    int i;
    int c;

    i = 0;
    c = 0;
    while (s1[i] == s2[i] && s1[i] && s2[i])
        i++;
    return(s1[i] - s2[i]);
}

int main(void)
{
    char    *s1;
    char    *s2;
    int     rescompare;

    s1 = "taha";
    s2 = "tahasen";
    rescompare = ft_strcmp(s1, s2);
    printf("RES COMPARE %d\n", rescompare);
}
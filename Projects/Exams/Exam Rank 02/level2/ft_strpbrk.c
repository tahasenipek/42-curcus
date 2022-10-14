#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char    *ft_strpbrk(char *s1, char *s2)
{
    int     i;
    int     j;
    int     c;
    int     tmp;
    char    *temp;

    tmp = 0;
    c = 0;
    i = 0;
    j = 0;
    while (s1[i])
    {
        while (s2[j])
        {
            if (s1[i] == s2[j])
            {
                c = i;
                while (s1[i])
                    i++;
                temp = malloc(sizeof(char) * i - c);
                i = c;
                while (s1[i])
                    temp[tmp++] = s1[i++];
                temp[tmp] = '\0';
                return (temp);
            }
            j++;
        }
        j = 0;
        i++;
    }
    return (0);
}

int main()
{
    char    *s1;
    char    *s2;
    char    *temp;
    char    *temp1;

    s1 = "ararapanda";
    s2 = "kynakpirmit";
    temp = strpbrk(s1, s2);
    temp1 = ft_strpbrk(s1, s2);
    printf("TEMP %s\n", temp);
    printf("TEMP1 %s\n", temp1);
}
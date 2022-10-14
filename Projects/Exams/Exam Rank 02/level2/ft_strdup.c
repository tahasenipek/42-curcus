#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char    *ft_strdup(char *src)
{
    int i;
    char *temp;

    i = 0;
    while (src[i])
        i++;
    temp = malloc(sizeof(char) * i + 1);
    i = 0;
    while (src[i])
    {
        temp[i] = src[i];
        i++;
    }
    temp[i] = '\0';
    return (temp);
}

int main()
{
    char *s = "taha";

    char *target = ft_strdup(s);
    char *target1 = strdup(s);
    printf("TARGER %s\n", target);
}
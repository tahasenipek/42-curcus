#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char    *ft_strrev(char *s)
{
    int     i;
    char    c;
    int     count;
    char    *temp;

    i  = 0;
    count = 0;
    while (s[i])
        i++;
    count = i;
    temp = malloc(sizeof(char)* count + 1);
    i = 0;
    while (s[i])
    {
        temp[i] = s[count - 1];
        count--;
        i++;
    }
    temp[i] = '\0';
    return (temp);
}

int main()
{
    char *s;

    s = "mehmet taha senipek";
    printf("Reverses == %s\n",ft_strrev(s));

}
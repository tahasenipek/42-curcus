#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int ft_strlen(char *s)
{
    int i;

    i = 0;
    while (s[i])
        i++;
    return(i);

}

int main()
{
    char *s;

    s = "mehmet taha senipek";
    printf("%d\n", ft_strlen(s));
}
#include <stdio.h>
#include <stdlib.h>

int max(int *tab, unsigned int len)
{
    int i;
    int max;
    int c;

    c = 1;
    max = 0;
    i = 0;
    if(!tab)
        return(0);
    while (len)
    {
        if (tab[i] > max)
            max = tab[i];
        i++;
        len--;
    }
    return (max);
}

int main(void)
{
    int ii;
    int i;
    int c;
    int cnt;
    int *allint;

    i = 76;
    ii = 1;
    c = 32;
    cnt = 92;
    allint = malloc(sizeof(int) * 4);
    allint[0] = i;
    allint[1] = ii;
    allint[2] = c;
    allint[3] = cnt;
    printf("MAX == %d\n", max(allint, 4));
}

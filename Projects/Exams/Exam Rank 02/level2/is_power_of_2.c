#include <stdio.h>
#include <unistd.h>

int is_power_of_2(unsigned int n)
{
    int i;

    i = 1;
    while (i <= n)
    {
        if (n == i)
            return (1);
        i = i * 2;
    }
    return (0);
}


int main()
{
    unsigned int    i;

    i = 54;
    printf("i is power of result == %d\n", is_power_of_2(i));
}
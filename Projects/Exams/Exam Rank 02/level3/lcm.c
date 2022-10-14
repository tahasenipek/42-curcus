#include <stdio.h>

unsigned int    lcm(unsigned int a, unsigned int b)
{
    unsigned int n;

    if (a == 0 || b == 0)
        return (0);
    if (a > b)
        n = a;
    else
        n = b;
    while (1)
    {
        if (n % a == 0 || n % b == 0)
            return(n);
        ++n;
    }
}

int main(int ac)
{
    unsigned int a;
    unsigned int b;

    a = 12;
    b = 43;
    if (ac == 3)
    {
        lcm(a, b);
    }
}
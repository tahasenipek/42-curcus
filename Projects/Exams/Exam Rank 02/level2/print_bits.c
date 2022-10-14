#include <stdio.h>
#include <unistd.h>

void    print_bits(unsigned char c)
{
    int i;

    i = 8;
    while(i >= 0)
    {
        if (c >> i  & 1)
            write(1, "1", 2);
        else
            write(1, "0", 2);
        i--;
    }
}

int main()
{
    unsigned char c;

    c = '1';

    print_bits(c);
}
#include <stdio.h>
#include <unistd.h> //write
#include <stdlib.h> //exit

void    writenumber(int i)
{
    char str[10] = "0123456789";

    if (i > 9)
        writenumber(i / 10);
     write(1, &str[i % 10], 1);
}


int main(void)
{
    int i;

    i = 1;
    while (i < 101)
    {
        if (i % 3 == 0)
        {
            write(1, "fizz\n", 5);
            i++;
        }
        else if(i % 5 == 0)
        {
            write(1, "buzz\n", 5);
            i++;
        }
        else if (i % 5 == 0 && i % 3 == 0) 
        {
            write(1, "fizzbuzz\n", 9);
            i++;
        }
        else
        {
            writenumber(i);
            i++;
            write(1,"\n", 1);
        }
    }
}
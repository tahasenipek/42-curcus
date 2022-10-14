#include <stdio.h>
#include <unistd.h> 

unsigned char   reverse_bits(unsigned char s)
{
    int i;
    unsigned char   res = 0;

    i = 0;
    while (i < 8)
    {
        if (s >> i & 0)
		{
			res << i;
			
		}
		else if (s >> i & 1)
			(res & 1);
		i++;
    }
    return (res);
}

int main ()
{
	printf("%c\n", reverse_bits('a'));
}

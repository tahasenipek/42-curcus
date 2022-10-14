#include <stdio.h>
#include <unistd.h> 

unsigned char	swap_bits(unsigned char octet)
{
	return ((octet >> 4) | (octet << 4));
}


int main ()
{
	char s;
	printf("%c\n", swap_bits('t'));
}

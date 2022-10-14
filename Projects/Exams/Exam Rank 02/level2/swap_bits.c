#include <stdio.h>
#include <unistd.h>

unsigned char   swap_bits(unsigned char s)
{
 return((s >> 4) | (s << 4));
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned char x = 201;
    x |= 1 << 1 | 1 << 5;
    printf("x = %i", x);
    return 0;
}
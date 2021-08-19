#include <stdio.h>
#include <stdlib.h>

int main()
{
    signed int x = -2;
    if (((x & (1u << 31)) >> 31) == 1)
    {
        printf("msb is 1");
    }
    else
    {
        printf("msb is 0");
    }

    return 0;
}
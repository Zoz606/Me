#include <stdio.h>
void max(int x, int y)
{
    int z;
    if (x > y)
    {
        z = x;
    }
    else
    {
        z = y;
    }
    printf("Max = %i", z);
}
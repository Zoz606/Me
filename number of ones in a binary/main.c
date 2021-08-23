#include <stdio.h>
#include <stdlib.h>

int main()
{
    signed int x, i, z = 0;
    printf("Please enter a number : ");
    scanf("%i", &x);
    for (i = 0; i <= x; i++)
    {
        if (((x & 1 << i) >> i) == 1)
        {
            z++;
        }
    }
    printf("The number of ones in the binary of this number = %i ones", z);
    return 0;
}
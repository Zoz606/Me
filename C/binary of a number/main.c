#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int x = 15;
    int i;
    printf("Please enter a number : ");
    scanf("%u", &x);
    printf("The binary of the number is : ");
    for (i = 31; i >= 0; i--)
    {
        if (((x & 1 << i) >> i) == 1)
        {
            printf("%i", 1);
        }
        else
        {
            printf("%i", 0);
        }
    }

    return 0;
}
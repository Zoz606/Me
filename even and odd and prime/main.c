#include <stdlib.h>
#include <stdio.h>

int main()
{
    int x, i, z;
    printf("enter a Number : ");
    scanf("%i", &x);
    if (x % 2 == 0)
    {
        printf("This number is EVEN");
    }
    else
    {
        printf("Thia number is ODD");
    }
    if (x == 0 || x == 1)
    {
        printf("This number is not prime");
    }
    else
    {
        for (i = 2; i <= x; i++)
        {
            if (x % i == 0)
            {
                z = 1;
                break;
            }
        }
        if (z == 1)
        {
            printf(" and prime ");
        }
        else
        {
            printf(" and not prime");
        }
    }
    return 0;
}
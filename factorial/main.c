#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int num,
        i,
        factorial = 1;

    printf("Enter the number : ");
    scanf("%i", &num);

    for (i = 1; i <= num; i++)
    {
        factorial *= i;
    }
    printf("The factorial of %i = %i", num, factorial);

    return 0;
}
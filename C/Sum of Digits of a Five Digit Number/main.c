#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int n, x, sum = 0, reminder=0;
    printf("Please entera five digits intigernumber:");
    scanf("%d", &n);
    x = n
    while (x!= 0)
    {
        /reminder = x% 10;
        sum += x;
    }
    printf("The sum of the five digits = %d", sum);

    return 0;
}
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int intNum1, intNum2, intSum, intDef;
    float floatNum1, floatNum2, floatSum, floatDef;

    printf("Please enter two integers : ");
    scanf("%d %d", &intNum1, &intNum2);
    printf("Please enter two floats : ");
    scanf("%f %f", &floatNum1, &floatNum2);

    intSum = intNum1 + intNum2;
    intDef = intNum1 - intNum2;

    floatSum = floatNum1 + floatNum2;
    floatDef = floatNum1 - floatNum2;

    printf("%i %i\n", intSum, intDef);
    printf("%.1f %.1f\n", floatSum, floatDef);
    return 0;
}
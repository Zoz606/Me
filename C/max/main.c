#include <stdio.h>
#include <stdlib.h>

int main()
{

    int a, b, c, d;
    printf("Enter the first number : ");
    scanf("%i", &a);
    printf("Enter the second number : ");
    scanf("%i", &b);
    printf("Enter the first number : ");
    scanf("%i", &c);
    printf("Enter the first number : ");
    scanf("%i", &d);

    // Using if
    /*
    if (x > y && x > z)
    {
        printf("The maximum Number is : %i", x);
    }
    else if (y > x && y > z)
    {
        printf("The maximum Number is : %i", y);
    }
    else if (z>y&&z>x)
    {
        printf("The maximum Number is : %i", z);
    } else {
        printf("The three numbers are equal");
    }
    }
    
    */

    // Using Switch

    switch ((x > y && x > z) + 2 * (y > z && y > x) + 3 * (z > x && z > y))
    {
    case 1:
        printf("The maximum Number is : %i", x);
        break;
    case 2:
        printf("The maximum Number is : %i", y);
        break;
    case 3:
        printf("The maximum Number is : %i", z);
        break;
    default:
        printf("The three numbers are equal");
        break;
    }

    return 0;
}



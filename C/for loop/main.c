#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int a, b;
    scanf("%d\n%d", &a, &b);
    // Complete the code.
    char arr[][10] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    for (int n = a; n <= b; n++)
    {
        /* code */
        if (n > 9)
        {
            if (n % 2 == 0)
            {
                printf("even\n");
            }
            else if (n % 2 != 0)
            {
                printf("odd\n");
            }
        }
        else if ((n >= 1) && (n <= 9))
        {
            printf("%s\n", arr[n - 1]);
        }
    }

    return 0;
}

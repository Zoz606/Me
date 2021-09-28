#include <stdio.h>
#define SIZE 5
int main()
{
    //declearation
    int num[SIZE];
    int i,
        max,
        min;

    //filling the array
    for (i = 0; i < SIZE; i++)
    {
        printf("Please enter teh element number %d: ", i + 1);
        scanf("%d", &num[i]);
    }
    max = num[0];
    min = num[0];

    //maximum and minimum values
    for (i = 0; i < SIZE; i++)
    {
        //maximum value
        if (num[i] > max)
        {
            max = num[i];
        }
        //maximum value
        if (num[i] < min)
        {
            min = num[i];
        }
    }

    //results
    printf("The max number of the array is : %d\n", max);
    printf("The min number of the array is : %d", min);
    return 0;
}

#include <stdio.h>
#define SIZE 5
int main()
{
    //declearation
    int num[SIZE],
        i,
        j,
        temp,
        location;

    //filling the array
    for (i = 0; i < SIZE; i++)
    {
        printf("Please enter teh element number %d: ", i + 1);
        scanf("%d", &num[i]);
    }

    //order
    for (i = 0; i < SIZE; i++)
    {
        location = i;
        for (j = i + 1; j < SIZE; j++)
        {
            if (num[j] < num[location])
            {
                location = j;
            }
        }
        if (location != i)
        {
            temp = num[i];
            num[i] = num[location];
            num[location] = temp;
        }
    }

    printf("This array order is: ");
    for (i = 0; i < SIZE; i++)
    {
        printf("%i ", num[i]);
    }

    return 0;
}

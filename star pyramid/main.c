#include <stdio.h>
#include <stdlib.h>

int main()
{
    //declearation
    int count1,
        count2,
        count3,
        k = 1,
        rows,
        space;

    printf("Enter the number of rows :");
    scanf("%i", &rows);
    space = rows - 1;

    // the rows loop
    for (count1 = 1; count1 <= rows; count1++)
    {

        //space loop
        for (count3 = space; count3 >= 0; count3--)
        {
            printf(" ");
        }
        space--;

        // The coulmns loop
        for (count2 = 1; count2 <= count1; count2++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
#include <stdio.h>

int main()
{
    int arr[9] = {1, 2, 3, 3, 2, 5, 7, 1, 5},
        i,
        unrepeated = arr[0];
    for (i = 1; i < 9; i++)
    {
        unrepeated = unrepeated ^ arr[i];
    }
    printf("The unrepeated value is %d", unrepeated);
    return 0;
}

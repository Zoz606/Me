#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 1;
    char *ptr = &x;
    if (*ptr == 1)
    {
        printf("This IDE is liitle indian");
    }
    else
    {
        printf("This IDE is big indian");
    }

    return 0;
}
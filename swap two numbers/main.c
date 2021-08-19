#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Firts solution
    /*
    signed char x = 2, y = 3, temporaoy;
    printf("the old value of x = %i\nthe old value of y = %i\n\n", x, y);
    temporaoy = y;
    y = x;
    x = temporaoy;
    printf("the new value of x = %i\nthe new value of y = %i", x, y);
    */

    //Second solution
    /*
    signed char x = 2, y = 3,temporaoy;
    printf("the old value of x = %i\nthe old value of y = %i\n\n", x, y);
    temporaoy = y;
    y &= x  y;
    x = y | temporaoy;
    printf("the new value of x = %i\nthe new value of y = %i", x, y);
    */

    //Third solution
    /*
    signed int x = 2, y = 3, temporaoy;
    printf("the old value of x = %i\nthe old value of y = %i\n\n", x, y);
    x ^= y;
    y ^= x;
    x ^= y; //x |= y
    printf("the new value of x = %i\nthe new value of y = %i", x, y);
    */
    return 0;
}
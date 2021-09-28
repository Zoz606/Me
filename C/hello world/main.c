#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    char hello[] = "hello world!";
    char s[100];
    gets(s);
    printf("%s\n", hello);
    puts(s);
    return 0;
}
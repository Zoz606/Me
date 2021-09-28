#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch,
        s[10],
        sen[50];
    scanf("%c\n", &ch);
    scanf("%s\n", s);
    gets(sen);

    printf("%c\n", ch);
    puts(s);
    puts(sen);
    return 0;
}
#include <stdio.h>

int main()
{
	int x = 50;
	int *y = &x;
	printf("%i\n", &x); //addres x
	printf("%i\n", y);	//addres x
	printf("%i\n", *y); // value of x
	printf("%i\n", &y); //addres y

	return 0;
}
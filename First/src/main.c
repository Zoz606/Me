#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct car
{
	int x;
	char y;
};

int main()
{
	struct car car;
	car.x = 10;
	car.y = 11;
	printf("%d\n", car.x);
	return 0;
}

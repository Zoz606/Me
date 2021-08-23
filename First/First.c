#include <stdio.h>
#include <stdlib.h>
unsigned int inc(unsigned char x, unsigned char y);
int main()
{
	int z;
	z = inc(200, 200);
	printf("%i", z);

	return 0;
}

unsigned int inc(unsigned char x, unsigned char y)
{
	return x + y;
}

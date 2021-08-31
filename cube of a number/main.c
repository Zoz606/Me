#include <stdio.h>
#include <stdlib.h>

int main()
{
	unsigned int num, cube = 1;
	int counter;
	printf("Enter a number : ");
	scanf("%u", &num);
	for (counter = 1;counter <= num;counter++)
	{
		cube = counter * counter * counter;
		printf("Number is : %u and the cube is : %u\n",counter ,cube);
	}
    return 0;
}
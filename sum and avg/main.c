#include <stdio.h>
#include <stdlib.h>

int main()
{
	unsigned int x, sum = 0, i;
	float avg;
	for (i = 1; i <= 10; i++)
	{
		printf("Enter the number num %i : ", i);
		scanf("%i", &x);
		sum += x;
	}
	printf("the sum = %i\n", sum);
	printf("the average = %f", sum/10);
    return 0;
}
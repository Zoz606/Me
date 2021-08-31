#include <stdio.h>
#include <stdlib.h>

int main()
{
	int sum = 0, n;
    int i;
	printf("please write the natural number :");
	scanf(" %i", &n);
	for (i = 1;i <= n;i++) 
	{
		sum += i;
		printf("%i ",i);
	}
	printf("\nThe sum = %i",sum);
    return 0;
}
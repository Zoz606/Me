#include <stdio.h>
#include <stdlib.h>

int main()
{
	int num;
	int counter;
	int multi = 1;
	
	printf("Enter a number :");
	scanf("%i", &num);
	printf("The multiplication table of %i :\n\n", num);
	for (counter = 1;counter <= 12; counter++)
	{
		
		multi = num * counter;
		printf("%i * %i = %i\n",num ,counter, multi );
		
	}
    return 0;
}
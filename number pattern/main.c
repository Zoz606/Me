#include <stdio.h>
#include <stdlib.h>

int main()
{

    int count1 ,count2 ,count3 ,rows;
	
	printf("Enter the number of rows :");
	scanf("%i", &rows);
	
	for(count1 = 1;count1 <= rows;count1++)
	{
		for(count2 = 1;count2 <= count1; count2++)
		{
			printf("%i",count1);
		}
		printf("\n");	
	}
    return 0;
}
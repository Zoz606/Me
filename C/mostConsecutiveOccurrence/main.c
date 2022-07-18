#include <stdio.h>

int main()
{
	unsigned int arr[] = {1, 2, 2, 3, 3, 3, 3, 4, 4, 4, 4, 3, 3};
	unsigned int mostConsecutiveOccurrence;
	for (int i = 0; i <= 13; i++)
	{

		if (arr[i] == arr[i - 1] && arr[i] == arr[i - 2])
		{
			mostConsecutiveOccurrence = arr[i];
		}
	}
	printf("%i", mostConsecutiveOccurrence);

	return 0;
}

#include <stdio.h>
#pragma warning(disable:4996)

main()
{
	int Number, i;

	printf("Enter a number :");
	scanf("%d", &Number);

	for (i = 1; i <= Number; i++)
	{
		if (Number % i == 0)
			printf("%d ", i);
	}
}
#include <stdio.h>
#pragma warning (disable:4996)

main()
{
	int a, b, result;

	printf("Enter a number :");
	scanf("%d", &a);

	result = (a / 1000) + (a % 1000) / 100 + (a % 100) / 10 + a % 10;

	printf("%d\n", result);
}
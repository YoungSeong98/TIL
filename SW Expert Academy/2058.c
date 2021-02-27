#include <stdio.h>
#pragma warning (disable:4996)

main()
{
	int receive_number, result;

	printf("Enter a number :");
	scanf("%d", &receive_number);

	result = (receive_number / 1000) + (receive_number % 1000) / 100 + (receive_number % 100) / 10 + receive_number % 10;

	printf("%d\n", result);
}

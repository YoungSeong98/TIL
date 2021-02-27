#include <stdio.h>
#pragma warning (disable:4996)

main()
{
	int receive_number, result = 0;

	printf("Enter a number :");
	scanf("%d", &receive_number);

	while (receive_number > 0)
	{
		result += receive_number;
		--receive_number;
	} 

	printf("%d", result);
}
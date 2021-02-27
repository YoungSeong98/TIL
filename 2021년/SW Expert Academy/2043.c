#include <stdio.h>
#pragma warning (disable:4996)

main()
{
	int password, input, number_of_times = 0;
	
	printf("Enter a password and a number :");
	scanf("%d %d", &password, &input);

	while (password - input >= 0)
	{
		++number_of_times;
		++input;
	}
	printf("%d", number_of_times);
}
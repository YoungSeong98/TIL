#include <stdio.h>
#pragma warning (disable:4996)

main()
{
	int test_number, first, second, i, number_of_times = 1, divison_share, remainder;
	
	printf("Enter test_case :");
	scanf("%d", &test_number);
	
	for (i = 0; i < test_number; i++)
	{
	printf("Enter two numbers :");
	scanf("%d %d", &first, &second);

	divison_share = first / second;
	remainder = first % second;
		
	printf("#%d %d %d\n", number_of_times, divison_share, remainder);

	++number_of_times;

	}

}


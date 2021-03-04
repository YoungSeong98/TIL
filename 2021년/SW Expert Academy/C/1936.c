#include <stdio.h>
#pragma warning (disable:4996)

main()
{
	int first, second;
	printf("Enter two rock - paper - scissors :");
	scanf("%d %d", &first, &second);

	if (first + second == 3)
	{
		if (first == 2)
			printf("first\n");
		else
			printf("second\n");
	}
	else if (first + second == 4)
	{
		if (first == 1)
			printf("first\n");
		else
			printf("second\n");
	}
	else if (first + second == 5)
	{
		if (first == 3)
			printf("first\n");
		else
			printf("second\n");
	}
}

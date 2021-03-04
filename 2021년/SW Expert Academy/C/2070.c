#include <stdio.h>
#pragma warning (disable:4996)

main()
{
	int first, second, i, test_case;

	printf("Enter a test case :");
	scanf("%d", &test_case);

	for (i = 0; i < test_case; i++)
	{
		printf("Enter two numbers :");
		scanf("%d %d", &first, &second);

		if (first < second)
			printf("#%d <\n", i + 1);
		else if (first == second)
			printf("#%d =\n", i + 1);
		else
			printf("#%d >\n", i + 1);
	}
}
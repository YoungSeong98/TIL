#include <stdio.h>
#pragma warning (disable:4996)

main()
{
	int i, j, test_case, number[10], result = 0;

	printf("Enter a test case :");
	scanf("%d", &test_case);

	for (j = 0; j < test_case; j++) {
		for (i = 0; i < 10; i++) {
			printf("Enter 10 numbers :");
			scanf("%d", &number[i]);

			if (number[i] % 2 != 0)
				result += number[i];
		}
		printf("#%d %d\n", j + 1, result);
		result = 0;
	}
}
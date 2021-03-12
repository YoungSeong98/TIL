// 2개의 수를 입력 바아 크기를 비교하여 등호 또는 부등호를 출력하는 프로그램을 작성하라

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
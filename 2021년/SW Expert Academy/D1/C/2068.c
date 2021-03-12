// 10개의 수를 입력받아, 그 중에서 가장 큰 수를 출력하여라

#include <stdio.h>
#pragma warning (disable:4996)

main()
{
	int list[10], test_number, i, j, k, temp;

	printf("Enter a test number :");
	scanf("%d", &test_number);

	for (k = 1; k <= test_number; k++) {
		printf("Enter 10 numbers :");
		for (i = 0; i < 10; i++)
		{
			scanf("%d", &list[i]);
		}

		for (i = 0; i < 9; i++) {
			for (j = 0; j < 9 - i; j++) {
				if (list[j] < list[j + 1]) {
					temp = list[j];
					list[j] = list[j + 1];
					list[j + 1] = temp;
				}

			}
		} printf("#%d %d\n",k, list[0]);
	}
}
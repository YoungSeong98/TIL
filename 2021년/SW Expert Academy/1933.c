#include <stdio.h>
#pragma warning (disable:4996)

main()
{
	int list[20] = { 5,1,2,17,4,0,6,12,8,9,10,19,7,13,15,16,3,18,11,14 };
	int key, i, flag = 0;
	int j, k, temp;
	int low, high, mid, result;

	printf("Before sort : ");
	for (i = 0; i < 20; i++)
		printf("%d ", list[i]);
	printf("\n");

	for (i = 0; i < 19; i++) {
		for (j = 0; j < 20 - 1 - i; j++) {
			if (list[j] > list[j + 1]) {
				temp = list[j];
				list[j] = list[j + 1];
				list[j + 1] = temp;
			}
		}
		printf("%d-th sort : ", i);
		for (k = 0; k < 20; k++)
			printf("%d ", list[k]);
		printf("\n");
	}
	printf("After sort : ");
	for (i = 0; i < 20; i++)
		printf("%d ", list[i]);
	printf("\n");

	//--------sort algorithm end--------

	printf("Enter a key value : ");
	scanf("%d", &key);

	low = 0;
	high = 19;

	while (low <= high) {
		printf("[%d %d]\n", low, high);
		mid = (high + low) / 2;

		if (key == list[mid]) {
			result = mid;
			flag = 1;
			break;
		}
		else if (key > list[mid])
			low = mid + 1;
		else
			high = mid - 1;
	}
	if (flag)
		printf("result : list[%d] = %d\n", result, list[result]);
	else
		printf("Cannot find\n");
}
// 입력받은 숫자부터 0까지 한줄에 순서대로 출력하라

#include <stdio.h>
#pragma warning (disable:4996)

main()
{
	int number, loop, i;

	printf("Enter a number :");
	scanf("%d", &number);

	loop = number;

	for (i = 0; i <= loop; i++) {
		printf("%d ", number);
		number--;
	}
}
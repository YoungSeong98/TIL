// 두 개의 자연수를 입력받아 사칙연산을 수행하는 프로그램을 작성하라.

#include <stdio.h>
#pragma warning (disable:4996)

main()
{
	int first_number, second_number;

	printf("Enter two numbers :");
	scanf("%d %d", &first_number, &second_number);

	printf("%d\n", (first_number + second_number));
	printf("%d\n", (first_number - second_number));
	printf("%d\n", (first_number * second_number));
	printf("%d\n", (first_number / second_number));
}
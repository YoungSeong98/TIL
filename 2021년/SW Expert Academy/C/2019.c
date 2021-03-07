// 1부터 주어진 횟수까지 2를 곱한 값(들)을 출력하시오.
// 주어질 숫자는 30을 넘지 않는다

#include <stdio.h>
#include <math.h>
#pragma warning (disable:4996)

main()
{
	float number, result = 2, i;

	printf("Enter a number :");
	scanf("%f", &number);

	for (i = 0; i < number + 1; i++) {
		printf("%.0f ", pow(result, i));
	}

}
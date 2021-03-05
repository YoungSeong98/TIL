// 입력으로 1개의 정수 N 이 주어진다.
// 정수 N 의 약수를 오름차순으로 출력하는 프로그램을 작성하라.

#include <stdio.h>
#pragma warning (disable:4996)

main()
{
	int N, i;
	printf("Enter a number :");
	scanf("%d", &N);

	for (i = 1; i <= N; i++)
	{
		if (N % i == 0)
			printf("%d ", i);
	}
}
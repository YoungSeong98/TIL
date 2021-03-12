// 주어진 숫자만큼 #을 출력해보라

#include <stdio.h>
#pragma warning (disable:4996)

main()
{
	int times, i;

	printf("Enter a number of times :");
	scanf("%d", &times);

	for (i = 0;i < times; i++)
	{
		printf("#");
	}
}
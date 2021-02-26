#include <stdio.h>
#pragma warning (disable:4996)

main()
{
	int a, b, c = 0;

	printf("번호 두개를 입력하세요 :");
	scanf("%d %d", &b, &a);

	while (b - a >= 0)
	{
		++c;
		++a;
	}
	printf("%d", c);
}
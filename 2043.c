#include <stdio.h>
#pragma warning (disable:4996)

main()
{
	int a, b, c = 0;

	printf("비밀번호와 숫자하나를 입력하세요 :");
	scanf("%d %d", &b, &a);

	while (b - a >= 0)
	{
		++c;
		++a;
	}
	printf("%d", c);
}

#include <stdio.h>
#pragma warning (disable:4996)

main()
{
	int a, b, c = 0;

	printf("��ȣ �ΰ��� �Է��ϼ��� :");
	scanf("%d %d", &b, &a);

	while (b - a >= 0)
	{
		++c;
		++a;
	}
	printf("%d", c);
}
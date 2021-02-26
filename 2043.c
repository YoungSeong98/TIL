#include <stdio.h>
#pragma warning (disable:4996)

main()
{
	int a, b, c = 0;

	printf("Enter a password and a number :");
	scanf("%d %d", &b, &a);

	while (b - a >= 0)
	{
		++c;
		++a;
	}
	printf("%d", c);
}
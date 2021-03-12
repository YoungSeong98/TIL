// 두 사람이 가위바위보를 한다.
// 가위는 1, 바위는 2, 보는 3으로 표현되며 두 사람이 무엇을 냈는지 입력으로 주어진다.
// 두 사람중 누가 이겼는지 판별해보라.단, 비기는 경우는 없다

#include <stdio.h>
#pragma warning (disable:4996)

main()
{
	int first, second;
	printf("Enter two rock - paper - scissors :");
	scanf("%d %d", &first, &second);

	if (first + second == 3)
	{
		if (first == 2)
			printf("first\n");
		else
			printf("second\n");
	}
	else if (first + second == 4)
	{
		if (first == 1)
			printf("first\n");
		else
			printf("second\n");
	}
	else if (first + second == 5)
	{
		if (first == 3)
			printf("first\n");
		else
			printf("second\n");
	}
}

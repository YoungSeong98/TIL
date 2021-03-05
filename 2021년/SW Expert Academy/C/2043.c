// 서랍의 비밀번호가 생각이 나지 않는다. 비밀번호는 양의 정수이다.
// 주어지는 번호 부터 1씩 증가하며 비밀번호를 확인해 볼 생각이다.
// 예를 들어 비밀번호가 123 이고 주어지는 번호가 100 일 때, 100부터 123까지 24번 확인하여 비밀번호를 맞출 수 있다.
// 비밀번호와 숫자가 주어지면 주어진 숫자부터 시작하여 몇 번 만에 비밀번호를 맞출 수 있는지 알아보자.

#include <stdio.h>
#pragma warning (disable:4996)

main()
{
	int password, input, number_of_times = 0;
	
	printf("Enter a password and a number :");
	scanf("%d %d", &password, &input);

	while (password - input >= 0)
	{
		++number_of_times;
		++input;
	}
	printf("%d", number_of_times);
}

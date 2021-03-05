// 2개의 수 a, b를 입력 받아, a를 b로 나눈 몫과 나머지를 출력하는 프로그램을 작성하라.
// 가장 첫 줄에는 테스트 케이스의 개수 T가 주어지고, 그 아래로 각 테스트 케이스가 주어진다.
// 각 테스트 케이스의 첫 번째 줄에는 2개의 수가 주어진다.

#include <stdio.h>
#pragma warning (disable:4996)

main()
{
	int test_number, first, second, i, number_of_times = 1, divison_share, remainder;
	
	printf("Enter test_case :");
	scanf("%d", &test_number);
	
	for (i = 0; i < test_number; i++)
	{
	printf("Enter two numbers :");
	scanf("%d %d", &first, &second);

	divison_share = first / second;
	remainder = first % second;
		
	printf("#%d %d %d\n", number_of_times, divison_share, remainder);

	++number_of_times;
	}

}


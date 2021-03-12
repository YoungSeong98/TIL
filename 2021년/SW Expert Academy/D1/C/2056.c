// 연월일 순으로 구성된 8자리의 날짜가 입력으로 주어진다.
// 해당 날짜의 유효성을 판단한 후, 날짜가 유효하다면 ”YYYY/MM/DD”형식으로 출력하고,
// 날짜가 유효하지 않을 경우, -1 을 출력하는 프로그램을 작성하라.
// 연월일로 구성된 입력에서 월은 1~12 사이 값을 가져야 하며
// 각각의 달에 해당하는 날짜까지의 값을 가질 수 있다 ex) 1월 -> 1~31일, 2월 -> 1~28일
// 2월의 경우, 윤년은 고려하지 않고 28일인 경우만 고려한다
// 입력은 첫줄에 총 테스트 케이스의 개수가 주어지고 다음 줄 부터 각 테스트 케이스가 주어진다
// 출력은 테스트 케이스 t에 대한 결과는 “#t”을 찍고, 한 칸 띄고, 정답을 출력한다

#include <stdio.h>
#pragma warning (disable:4996)

main()
{
	int data[8], i, j, k, test_case;

	printf("Enter a test case :");
	scanf("%d", &test_case);

	for (i = 0; i < test_case; i++)
	{
		for (j = 0; j < 8; j++) {
			printf("Enter a date :");
			scanf("%d", &data[j]);
		}

		if (data[5] == 2) {
			if (data[6] * 10 + data[7] > 28 || data[6] * 10 + data[7] < 1)
				printf("-1");
		}
		else if (data[5] == 4 || data[5] == 6 || data[5] == 9 || (data[4] == 1 && data[5] == 1))
		{
			if (data[6] * 10 + data[7] > 30 || data[6] * 10 + data[7] < 1)
				printf("-1");
		}
		else if (data[6] * 10 + data[7] > 31 || data[6] * 10 + data[7] < 1)
			printf("-1");
		else if (data[4] * 10 + data[5] > 12 || data[4] * 10 + data[5] < 1)
			printf("-1");

		else
		{
			printf("\n");
			printf("#%d ", i + 1);
			for (k = 0; k < 4; k++) {
				printf("%d", data[k]);
			}
			printf("/");
			for (k = 4; k < 6; k++) {
				printf("%d", data[k]);
			}
			printf("/");
			for (k = 6; k < 8; k++) {
				printf("%d", data[k]);
			}
		}
		printf("\n");
	}
}
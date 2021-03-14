// 숫자 N은 아래와 같다.
// N = 2 * *a x 3 * *b x 5 * *c x 7 * *d x 11 * *e
// N이 주어질 때 a, b, c, d, e 를 출력하라.단, N은 2 이상 10, 000, 000 이하이다.
// [입력]
// 가장 첫 줄에는 테스트 케이스의 개수 T가 주어지고, 그 아래로 각 테스트 케이스가 주어진다.
// 각 테스트 케이스의 첫 번째 줄에 N 이 주어진다.
// [출력]
// 출력의 각 줄은 '#t'로 시작하고, 공백을 한 칸 둔 다음 정답을 출력한다.
// (t는 테스트 케이스의 번호를 의미하며 1부터 시작한다.)

#include <stdio.h>
#pragma warning (disable:4996)

main()
{
	int test_case, number, a = 0, b = 0, c = 0, d = 0, e = 0, i;

	printf("Enter a test case:");
	scanf("%d", &test_case);

	for (i = 0; i < test_case; i++) {
		printf("Enter a number :");
		scanf("%d", &number);

		while (number % 2 == 0) {
			if (number == 1)
				break;
			a++;
			number /= 2;
		}
		while (number % 3 == 0) {
			if (number == 1)
				break;
			b++;
			number /= 3;
		}while (number % 5 == 0) {
			if (number == 1)
				break;
			c++;
			number /= 5;
		}while (number % 7 == 0) {
			if (number == 1)
				break;
			d++;
			number /= 7;
		}while (number % 11 == 0) {
			if (number == 1)
				break;
			e++;
			number /= 11;
		}
		printf("#%d %d %d %d %d %d", i + 1, a, b, c, d, e);
		a = 0, b = 0, c = 0, d = 0, e = 0;
	}
}
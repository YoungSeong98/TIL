// 1���� �־��� Ƚ������ 2�� ���� ��(��)�� ����Ͻÿ�.
// �־��� ���ڴ� 30�� ���� �ʴ´�

#include <stdio.h>
#include <math.h>
#pragma warning (disable:4996)

main()
{
	float number, result = 2, i;

	printf("Enter a number :");
	scanf("%f", &number);

	for (i = 0; i < number + 1; i++) {
		printf("%.0f ", pow(result, i));
	}

}
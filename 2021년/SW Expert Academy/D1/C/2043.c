// ������ ��й�ȣ�� ������ ���� �ʴ´�. ��й�ȣ�� ���� �����̴�.
// �־����� ��ȣ ���� 1�� �����ϸ� ��й�ȣ�� Ȯ���� �� �����̴�.
// ���� ��� ��й�ȣ�� 123 �̰� �־����� ��ȣ�� 100 �� ��, 100���� 123���� 24�� Ȯ���Ͽ� ��й�ȣ�� ���� �� �ִ�.
// ��й�ȣ�� ���ڰ� �־����� �־��� ���ں��� �����Ͽ� �� �� ���� ��й�ȣ�� ���� �� �ִ��� �˾ƺ���.

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

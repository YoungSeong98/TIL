// 주어진 문장의 모든 소문자 알파벳을 대문자로 변환하여라

#include <stdio.h>
#include <ctype.h>
#pragma warning (disable:4996)

main()
{
	char input[100];
	int i;

	printf("Enter sentence :");
	gets(input);

	for (i = 0; i < 100; i++) 
	{
		if (input[i] >= 97 && input[i] <= 122)
		{
			input[i] = input[i] - 32;
			printf("%c", input[i]);
		}

		else if (input[i] >= 65 && input[i] <= 90)
			printf("%c", input[i]);
				
	}
}
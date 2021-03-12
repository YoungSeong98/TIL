// 알파벳으로 이루어진 문자열을 입력 받아 
// 각 알파벳을 1부터 26까지의 숫자로 변환하여 출력하라
// *제약 사항* 문자열의 최대 길이는 200이다. 알파벳은 대문자만 입력된다

#include <stdio.h>
#pragma warning (disable:4996)

main()
{
	char string[200];
	int i;

	printf("Enter a string :");
	scanf("%s", string);

	
	for (i = 0; i < 200; i++) {
		if (string[i] == 0)
			break;
		printf("%d ", string[i] - 64);
	}
	
	
}

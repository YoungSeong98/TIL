// �־��� �ؽ�Ʈ�� �״�� ����϶�
// #++++
// +#+++
// ++#++
// +++#+
// ++++#

#include <stdio.h>
#pragma warning(disable:4996)

main()
{
	int row, column, i;

	for (row = 0; row < 5; row++)
	{
		for (column = 0; column < 5; column++)
		{
			if (row == column)
				printf("#");
			else
				printf("+");
		}
		printf("\n");
	}

}
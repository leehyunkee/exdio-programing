#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int number, number2;
	printf("내 나이는 n 살이고 내 키는 n센치다 : ");
	scanf("%d %d", &number, &number2);
	printf("내 나이는 %d 살이고 %d", number, number2);

	return 0;
}
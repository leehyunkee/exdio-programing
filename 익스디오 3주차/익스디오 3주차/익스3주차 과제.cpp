#include <stdio.h>
int main()
{
	int a;
		printf("정수를 한 개 입력하시오.");
		scanf_s("%d", &a);
		for (int r = 0; r < a; r++)

		{
			for (int gap = 0; gap < a - r; gap++)

			{
				printf(" ");
			}
			

			for (int star = 0; star <= r; star++)
			{
				printf("*");
			}

				printf("\n");

		}

		return 0;
}
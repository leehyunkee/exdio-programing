#include <stdio.h>

int main()
{
	int hs ;
	printf("별 얼마나 그릴건가요 :");
	scanf_s("%d, &hs");

	for (int res=0; res < hs; res++)
	{
		for (int gap = 0; gap < hs - res; gap++)
			printf(" ");
	}

	for (int star = 0; star < 0; star++)
	{
		printf("*");
	}

	printf("\n");


		return 0;
}




/*
#include<stdio.h>

int main()

{
	int s;


	printf("별 얼마나 만들기고 :");
	scanf_s("%d , &sn");


	for (int n = 0; n < s; n++)
	{
		for (int space = 0; space < s - 1; space++)
		{
			printf(" ");
		}
		for (int star = 0; star <= n; star++)
		{
			printf("*");
		}
		printf("\n");

	}
	return 0;
}
*/







/*
#include<stdio.h>

int main()

	{

		int star;

			printf("별 몇줄 만들고싶으신가요롤롤 : "); // 정사각형 한 변의 길이 (칸 수)

		scanf_s("%d", &star);

			for (int height = 1; height <= num; height++) // 세로 한 칸씩, 1번 돌면 다음줄로

			{

				for (int horizontal = 0; horizontal < num; horizontal++) // 가로 한 칸씩, 1번 돌면 다음칸으로

				{

					if (horizontal < (num - height)) // 가로가 (길이-세로)보다 작을 때, 공백

					{

						printf(" ");

					}

					else // 가로가 세로와 같거나 클 때, * 출력

					{

						printf("*");

					}

				}

				printf("\n"); // 다음줄 엔터 키
			}
			return 0;
	}
	*/
	

/*


#include<stdio.h>


int main()

{
	int firstnum = 0;
	int lastnum = 0;

	printf("첫 번째 숫자를 입력하시오 :\n ");
	scanf_s("%d", &firstnum);

	printf("두 번째 숫자를 입력하시오 :\n ");
	scanf_s("%d", &lastnum);

	if (firstnum > lastnum)
	{
		printf("%d 이/가 더 큰 수 입니다", firstnum);
	}
	else if (firstnum == lastnum)
	{
		printf("%d 와 %d 은/는 같은 수 입니다", firstnum, lastnum);
	}
	else
	{
		printf("%d 이/가 더 큰 수 입니다", lastnum);
	}

	return 0;

}
*/
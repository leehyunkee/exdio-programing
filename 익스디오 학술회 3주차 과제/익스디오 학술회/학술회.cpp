#include<stdio.h>

int main()
{
	int starnum;

	printf("숫자를 입력하시오 : ");
	scanf_s("%d", &starnum);

	for (int height = 0; height < starnum; height++)
	{

		for (int bottom = 0; bottom <= height; bottom++)
		{
			printf("#");
		}
		printf("$\n");
	}


	return 0;
}


/*
#include<stdio.h>

int main()
{
	int starnum;
	int space;
	printf("인피니티스톤이 몇개 떨어지나요 : ");
	scanf_s("%d", &starnum);
	
		for (int height = 0; height < starnum; height++)
		{
			for (int bottom = 0; bottom <= height; bottom++)
			{
				printf("@");
			}
			for (int bottom = 0; bottom < starnum - height; bottom++)
			{
				printf("*");
			}

			printf("\n");
		}
		for (int height = 0; height < starnum; height++)
		{

			for (int bottom = 0; bottom < starnum - height; bottom++)
			{
				printf("*");
			}
			for (int swap = 0; swap <= height; swap++)
			{
				printf("@");
			}
			printf("\n");
		}
		for (int height = 0; height < starnum; height++)
		{

			for (int bottom = 0; bottom < starnum - height; bottom++)
			{
				printf("@");
			}
			for (int swap = 0; swap <= height; swap++)
			{
				printf("*");
			}
			printf("\n");
		}
		for (int height = 0; height <= starnum; height++)
		{
			for (int bottom = 0; bottom < height; bottom++)
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
	int num;

	printf("몇줄의 운석을 만드실건가요 :");
	scanf_s("%d", &num);

	for (int h = 0; h <= num; h++)
	{
		for (int bot = 0; bot < h; bot++)
		{
			if ()
		}
		else
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}*/



/*별 만들기

#include<stdio.h>

int main()
{
	for (int i = 0; i < 5; i++)
	{
		for (int k = 0; k < i; k++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}



/*
#include<stdio.h>

int main()
{
	for (int cur = 1; cur < 10; cur++)
	{
		for (int is = 1; is < 10; is++)
		{
			printf("%d x %d = %d \n");
		}
	}
	return 0;
}



/*

// 구구단 무한

#include <stdio.h>

int main()
{
	int a;
	int b;

	while (a < 10)
	{
		printf("% d x % d = % d \n", a, b, a*b)

		*/

/*
// 100회 반복문장

#include <stdio.h>

int main()
{
	////*프로그래밍은 0부터 시작함 따라서 0~99 총 100회
	int num = 0;

	while (num < 100)
	{
		printf("Hello World! \n");
		num++;
	}
	return 0;
}
*/
/*

// 중간 기말 평균 case 이용 학점 등급 추출
#include<stdio.h>

int main()
{
	int midterm;
	int endterm;

	float average;
	char grade;


	printf("중간고사 점수를 입력하세요 : ");
	scanf_s("%d", &midterm);

	printf("기말고사 점수를 입력하세요 : ");
	scanf_s("%d", &endterm);

	average = (double)(midterm + endterm) / 2;
	printf("평균은 % .2f입니다 \n", average);

	grade = average / 10;

	switch (grade)
	{
	case 10:
	case 9:
		printf("당신의 학점은 A 입니다");
		break;
	case 8:
		printf("당신의 학점은 B 입니다");
		break;
	case 7:
		printf("당신의 학점은 C 입니다");
		break;
	case 6:
		printf("당신의 학점은 D 입니다");
		break;
	default:
		printf("당신의 학점은 E 입니다");
		break;
	}

	return 0;
}
*/
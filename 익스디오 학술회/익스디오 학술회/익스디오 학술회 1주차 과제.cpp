#include<stdio.h>

int main()
{
	int midterm = 0;
	int endterm = 0;
	float average = 0;
	

	printf("중간고사 점수를 입력하시오 :\n ");
	scanf_s("%d", &midterm);
	
	printf("기말고사 점수를 입력하시오 :\n ");
	scanf_s("%d", &endterm);

	average = (double)(midterm + endterm) / 2; 
	printf("평균은 %.1f이고 \n ", average);
	if (average >= 90)
	{
		printf("당신의 학점은 A 입니다");
	}
	else if (average >= 80 && average < 90)
	{
		printf("당신의 학점은 B 입니다");
	}
	else if (average >= 70 && average < 80)
	{
		printf("당신의 학점은 C 입니다");
	}
	else if (average >= 60 && average < 70)
	{
		printf("당신의 학점은 D 입니다");
	}
	else

	{
		printf("당신의 학점은 F 입니다");
	}
	return 0;
}
#include<stdio.h>

int main()
{
	int midterm = 0;
	int endterm = 0;
	float average = 0;
	

	printf("�߰���� ������ �Է��Ͻÿ� :\n ");
	scanf_s("%d", &midterm);
	
	printf("�⸻��� ������ �Է��Ͻÿ� :\n ");
	scanf_s("%d", &endterm);

	average = (double)(midterm + endterm) / 2; 
	printf("����� %.1f�̰� \n ", average);
	if (average >= 90)
	{
		printf("����� ������ A �Դϴ�");
	}
	else if (average >= 80 && average < 90)
	{
		printf("����� ������ B �Դϴ�");
	}
	else if (average >= 70 && average < 80)
	{
		printf("����� ������ C �Դϴ�");
	}
	else if (average >= 60 && average < 70)
	{
		printf("����� ������ D �Դϴ�");
	}
	else

	{
		printf("����� ������ F �Դϴ�");
	}
	return 0;
}
#include<stdio.h>

int main()
{
	int starnum;

	printf("���ڸ� �Է��Ͻÿ� : ");
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
	printf("���Ǵ�Ƽ������ � ���������� : ");
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

	printf("������ ��� ����ǰǰ��� :");
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



/*�� �����

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

// ������ ����

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
// 100ȸ �ݺ�����

#include <stdio.h>

int main()
{
	////*���α׷����� 0���� ������ ���� 0~99 �� 100ȸ
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

// �߰� �⸻ ��� case �̿� ���� ��� ����
#include<stdio.h>

int main()
{
	int midterm;
	int endterm;

	float average;
	char grade;


	printf("�߰���� ������ �Է��ϼ��� : ");
	scanf_s("%d", &midterm);

	printf("�⸻��� ������ �Է��ϼ��� : ");
	scanf_s("%d", &endterm);

	average = (double)(midterm + endterm) / 2;
	printf("����� % .2f�Դϴ� \n", average);

	grade = average / 10;

	switch (grade)
	{
	case 10:
	case 9:
		printf("����� ������ A �Դϴ�");
		break;
	case 8:
		printf("����� ������ B �Դϴ�");
		break;
	case 7:
		printf("����� ������ C �Դϴ�");
		break;
	case 6:
		printf("����� ������ D �Դϴ�");
		break;
	default:
		printf("����� ������ E �Դϴ�");
		break;
	}

	return 0;
}
*/
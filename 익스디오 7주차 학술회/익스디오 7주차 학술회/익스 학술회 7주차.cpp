#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


//void ChangeNumbers(int* p1, int* p2)
//{
//	int temp = *p1; //swap�ϴ� �۾�.
//	*p1 = *p2;
//	*p2 = temp;
//}
//
//int main(void)
//{
//	int num1;
//	int num2;
//
//
//	printf("����1 : ");
//	scanf("%d", &num1);
//	printf("����2 : ");
//	scanf("%d", &num2);
//
//	printf("�ٲٱ� ��..\n ����1 : %d, ����2 : %d\n", num1, num2);
//	ChangeNumbers(&num1, &num2);
//	printf("�ٲ� ��..\n ����1 : %d, ����2 : %d\n", num1, num2);
//
//	return 0;
//
//}
//void question2(int* a, int* b)
//{
//	
//	*a += *b;
//	
//}
//int main(void)
//{
//	int a;
//	int b;
//
//	printf("a�� �� ���ڸ� ���ÿ� : ");
//	scanf("%d", &a);
//	printf("b�� �� ���ڸ� ���ÿ� : ");
//	scanf("%d", &b);
//
//	printf("���ϱ� ��..\n a = %d,  b = %d\n", a, b);
//	question2(&a, &b);
//	printf("a�� b�� ���� ��..\n a = %d, b = %d\n", a, b);
//
//	return 0;
//}
struct MyStruct //����ü
{
	char name[8];
	int age;
	float height;

	void initialize(char* _name, int _age, int _height)
	{
		for (int i = 0; i < 20; i++)
		{
			name[i] = _name[i];
		}
		age = _age;
		height = _height;
	}
};

int main()
{
	MyStruct BRDN;

}

/*������: ����� ���ÿ� ����Ǵ� ��
ex ) struct a�� ������� => ����� ���ÿ� �����
it main�� 
Mystruct branden;
���ڸ��� �ٷ� struct Mystruct�� ������ �����

�Ҹ��� : �ش� ��ü�� �Ҹ�ɶ� ����Ǵ� ��*/
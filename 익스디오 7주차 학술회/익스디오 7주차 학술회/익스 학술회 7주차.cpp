#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


//void ChangeNumbers(int* p1, int* p2)
//{
//	int temp = *p1; //swap하는 작업.
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
//	printf("숫자1 : ");
//	scanf("%d", &num1);
//	printf("숫자2 : ");
//	scanf("%d", &num2);
//
//	printf("바꾸기 전..\n 숫자1 : %d, 숫자2 : %d\n", num1, num2);
//	ChangeNumbers(&num1, &num2);
//	printf("바꾼 후..\n 숫자1 : %d, 숫자2 : %d\n", num1, num2);
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
//	printf("a에 들어갈 숫자를 쓰시오 : ");
//	scanf("%d", &a);
//	printf("b에 들어갈 숫자를 쓰시오 : ");
//	scanf("%d", &b);
//
//	printf("더하기 전..\n a = %d,  b = %d\n", a, b);
//	question2(&a, &b);
//	printf("a에 b를 더한 후..\n a = %d, b = %d\n", a, b);
//
//	return 0;
//}
struct MyStruct //구조체
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

/*생성자: 선언과 동시에 실행되는 것
ex ) struct a를 만들었다 => 선언과 동시에 실행됨
it main에 
Mystruct branden;
쓰자마자 바로 struct Mystruct의 내용이 실행됨

소멸자 : 해당 객체가 소멸될때 실행되는 것*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int math(int firstnum, int secondnum, char mathChar)
{

	if (mathChar == '+')
	{
		return firstnum + secondnum;
	}
	else if (mathChar == '-')
	{
		return firstnum - secondnum;
	}
	else if (mathChar == '*')
	{
		return firstnum * secondnum;
	}
	else if (mathChar == '/')
	{
		return firstnum / secondnum;
	}
	else if (mathChar == '%')
	{
		return firstnum % secondnum;
	}
	/*else if (mathChar == '^')
	{
		while (true)
		{
			firstnum* firstnum

		}
		return
	}*/
}
void resultNum(int firstnum, int secondnum, char mathChar)
{
	math(firstnum, secondnum, mathChar);

	printf("%d %c %d = %d �Դϴ�.", firstnum, mathChar, secondnum, math(firstnum, secondnum, mathChar));

}

void programing1()
{
	int firstnum, secondnum;
	char mathChar;

	printf("������ ���� ����ÿ� ex) 1 + 1  : ");
	scanf("%d %c %d", &firstnum, &mathChar, &secondnum);

	/*int result;
	result =*/ resultNum(firstnum, secondnum, mathChar);

	//printf("%d %c %d = %d", firstnum, mathChar, secondnum, result);
}



//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
////int sum(int x, int y)
////{
//// return x + y;
////}
//int math(int firstnum, int secondnum, char mathChar)
//{
// if (mathChar == '+')
// {
//  return firstnum + secondnum;
// }
// else if (mathChar == '-')
// {
//  return firstnum - secondnum;
// }
// else if (mathChar == '*')
// {
//  return firstnum * secondnum;
// }
// else if (mathChar == '/')
// {
//  return firstnum / secondnum;
// }
// else if (mathChar == '%')
// {
//  return firstnum % secondnum;
// }
//}
//
//int main()
//{
// //int a = 1;
// //int b = 2;
//
// ////case 1 : a + b���� ������ �Ѵ�
// //int result = sum(a, b);
// //printf("%d", result);
// ////case 2 : a + b���� ������ dks�Ѵ�
// //printf("%d", sum(a, b));
//
// //int j = 0;
// //while (true)
// //{
// ////� ������ �ɶ����� ���ѹݺ��Ҷ� �ַ� ��
// // j++;
// //}
// //for (int i = 0; i < 10; i++)
// //{
// // //Ư�� Ƚ�� �ݺ��Ҷ� �ַ� ��
// //}
// int firstnum, secondnum;
// char mathChar;
//
// printf("������ ���� ����ÿ� ex) 1 + 1  : ");
// scanf("%d %c %d", &firstnum, &mathChar, &secondnum);
//
// int result;
// result = math(firstnum, secondnum, mathChar);
//
// printf("%d %c %d = %d", firstnum, mathChar, secondnum, result);
//
// return 0;
//} 
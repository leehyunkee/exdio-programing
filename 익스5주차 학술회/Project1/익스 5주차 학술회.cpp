#include<stdio.h>

//void func();
//
//int main()
//{
//	func();
//	func();
//	func();
//	func();
//	func();
//	func();
//	func();
//	func();
//	func();
//
//
//
//	return 0;
//}
//void func()
//{
//	static int a = 0;
//	int b = 0;
//
//	a++;
//	b++;
//
//	printf("a : %d, b : %d\n", a, b);
//}

extern int cal(int, int, int);

int main()
{


	int num;

	num = cal(1, 2, 3);

	printf("%d", num);

	return 0;
}
int cal(int x, int y, int z)
{
	int a;

	a = x + y + z;

	return a;
}




//extern int calculate(int firstnum, int secondnum);
//extern void secondwork();
//int num = 1;
//
//int main()
//{
//	
//
//	int outernum;
//
//	outernum = calculate(22, 33);
//
//	printf("%d\n", outernum);
//
//
//	secondwork();
//
//
//	return 0;
//
//
//}
//int calculate(int firstnum, int secondnum)
//{
//	int plus;
//
//	plus = firstnum + secondnum;
//
//	return plus;
//
//
//}
//void secondwork()
//{
//	printf("%d\n", num);
//
//	int num = 5;
//	printf("%d", num);
//
//}
#include < stdio.h >

//
//extern int numbering(int, int, int);
//
//int main()
//{
//
//
//
//}
//int numbering(int firstnum, int secondnum, int lastnum)
//{
//	sc
//}


extern int calculate(int firstnum, int secondnum);


int main()
{
	

	int outernum;
	int a;
	int b;

	outernum = calculate(a, b);

	printf("%d\n", outernum);
	scanf_s("%d, %d" &a, &b);




	return 0;


}
int calculate(int firstnum, int secondnum)
{
	static int plus;

	if (firstnum > secondnum)
	{
		plus = secondnum;
		printf("%d\n", secondnum);
	}
	else
	{
		plus = firstnum;
		printf("%d\n", firstnum);
	}

	return plus;


}

#define _CRT_SECURE_NO_WARNINGS
#include < stdio.h >


int calculate(int firstnum, int secondnum, int thirdnum);
void InputAnything(char Language[40]);

int main()
{

	
	int firstnum, secondnum, thirdnum;

	printf(" 숫자를 입력하세요 (ex. 1, 2, 3) : ");
	scanf("%d %d %d", &firstnum, &secondnum, &thirdnum);

	int outernum;
	outernum = calculate(firstnum, secondnum, thirdnum);

	printf("가장 큰 숫자는 :%d 입니다.\n", outernum);
	

	char Language[40];


	printf("문자열을 출력하시오 :");
	scanf("%s", Language);

	InputAnything(Language);

	return 0;


}
int calculate(int firstnum, int secondnum, int thirdnum)
{
	int plus1, plus2, plus3;

	plus1 = firstnum;
	plus2 = secondnum;
	plus3 = thirdnum;


	if (plus1 > plus2 && plus1 > plus3)
	{
		return plus1;
	}
	else if (plus2 > plus1 && plus2 > plus3)
	{
		return plus2;
	}
	else
	{
		return plus3;
	}


}

void InputAnything(char Language[40])
{
	int NumberOfWord = 0;


	for (int i = 0; Language[i] != '\0'; i++)
	{
		NumberOfWord += 1;
	}

	printf("문자열의 길이는 : %d 입니다.", NumberOfWord);

	
}
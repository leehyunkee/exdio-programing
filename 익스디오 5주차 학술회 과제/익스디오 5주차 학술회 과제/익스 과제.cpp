#define _CRT_SECURE_NO_WARNINGS
#include < stdio.h >


int calculate(int firstnum, int secondnum, int thirdnum);
void InputAnything(char Language[40]);

int main()
{

	
	int firstnum, secondnum, thirdnum;

	printf(" ���ڸ� �Է��ϼ��� (ex. 1, 2, 3) : ");
	scanf("%d %d %d", &firstnum, &secondnum, &thirdnum);

	int outernum;
	outernum = calculate(firstnum, secondnum, thirdnum);

	printf("���� ū ���ڴ� :%d �Դϴ�.\n", outernum);
	

	char Language[40];


	printf("���ڿ��� ����Ͻÿ� :");
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

	printf("���ڿ��� ���̴� : %d �Դϴ�.", NumberOfWord);

	
}
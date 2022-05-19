#include<stdio.h>

// ������ �ذ��ϴµ� ���� �Լ��� �̸� ����
void problem1();
void problem2();
int problem3();
void problem4(int);
int isDigit(char);
int numberofDigits(unsigned int);

int main()
{	
	int input; // 3 , 4�� �������� ���� input ���� ���������� ���� 

	// problem 1~ problem 4�� ������� ȣ��
	problem1();
	problem2();
	input = problem3();
	problem4(input);

	return 0;
}

// �������� �������� �Ǻ��ϴ� �Լ� ( ���ڶ�� 1�� ��ȯ, �ƴ϶�� 0�� ��ȯ)
int isDigit(char input) // char �ڷ��� input�� �Ű� ������ ������.
{
	// ASCII�ڵ带 �������� ���� '0'�� ���� '9'���̿� input���� �����Ѵٸ� ���ڷ� �Ǻ��Ѵ�.
	if (input > '0' && input < '9') return 1;
	return 0;
}

// ���ڹ��ڵ��� �ڸ����� ��ȯ�ϴ� �Լ�
int numberofDigits(unsigned int num) // 32��Ʈ ���� �����̹Ƿ� unsigned int �ڷ����� ���� num�� �Ű������� ������.
{
	// ���� ��ȯ��ų int �ڷ��� answer ���� ���� �� �ʱ�ȭ (���� �Է¹��� �ʰ� �״�� ����ϱ� ������ �ʱ�ȭ�� �ʼ��̴�.)
	int answer = 0;

	// num���� 10���� ũ�ų� ���� ��� �ݺ� (num�� �ݺ������� 10���� �����鼭 ���� Ƚ����ŭ �ڸ����� ��Ÿ���� answer���� 1�� ���ϴ� ���)
	while (num >= 10)
	{
		num /= 10;
		answer++;
	}
	answer++; // 1�� �ڸ����� ���� �ݺ������� answer�� �������� �����Ƿ� �߰������� 1�� �����ش�.

	return answer; // answer���� ��ȯ�Ѵ�.
}

void problem1()
{
	char input; // char�� input���� ����

	// input�� �Է¹ޱ�
	printf("���ڹ��ڸ� �Է��ϼ��� (��. 3) : ");
	scanf_s("%c", &input, 1);

	// isDigit�Լ��� ���ǹ��� ����Ͽ� ��ȯ ���� ���� ��������, ���ڹ��ڰ� �ƴ��� ���.
	if (isDigit(input) == 1) printf("%c�� �����Դϴ�. \n", input);
	else printf("%c�� ���ڹ��ڰ� �ƴմϴ� \n", input);
}

void problem2()
{
	char input[5]; // �ִ� 5���� ���ڸ� ���� �� �ִ� �迭 input[5]�� ����
	int answer = 0; // ��������� ����� answer���� ���� �� �ʱ�ȭ
	int temp; // input[i]������ �ӽ������� int �ڷ��� tmep�� ����

	printf("�ִ� �ټ����� ���� ���ڵ��� �� �ڸ��� �Է����ּ��� (ex. 1 2 3 4 5): ");
	for (int i = 0; i < 5; i++)
		scanf_s(" %c", &input[i], 1);

	for (int i = 0; i < 5; i++)
	{
		if (isDigit(input[i]) == 1) // input[i]���� ������ ���
		{
			temp = (int)input[i] - 48; // ASCII �ڵ忡�� ���ڵ��� ��ȣ�� (�ڱ����) + 48�� ���� �����Ƿ� int������ ��ȯ ��, 48�� ���ָ� �ڱ� �ڽ��� ������ ��ȯ�ȴ�.
			answer += temp; // temp���� answer���� �����ش�.
			answer *= 10; // �ڸ����� �����ؾ� �ϹǷ� answer���� 10�� �����ش�.
		}
		else // input[i]���� ���ڰ� �ƴѰ�� 
			break; // break�� ���� �ٷ� �ݺ������� �������´�.
	}
	answer /= 10; // �ݺ����� ���ؼ� ���� ������� 10�� �ѹ� �� ������ �����Ƿ� ��������� 10�� ������ �ش�.

	printf("�ټ� �ڸ��� ������ ���ڴ� 10������ %d�Դϴ�. \n", answer);
}

int problem3()
{
	unsigned int input; // 32��Ʈ ���� ������ �Է¹ޱ� ���ؼ� unsigned int�ڷ��� input�� ����;

	printf("32��Ʈ ���� ������ �Է��ϼ���(�ּ�: 0, �ִ�: 4294967295) : "); 
	scanf_s("%d", &input);

	printf("%d�� �ڸ����� %d�� �Դϴ�. \n",input, numberofDigits(input)); // numberofDigits �Լ��� ����Ͽ� �ڸ����� ��ȯ

	return input; // problem 4���� �Է°��� �״�� ����ϹǷ� input���� ��ȯ��Ŵ
}

void problem4(int num)
{
	// ���� �ذῡ ���� ������ �ʱ�ȭ
	int sum = 0;

	// num���� �ӽ� �������� int �ڷ��� temp���� ���� �� , num ������ �ʱ�ȭ;
	int temp = num;

	// ������ �����ڸ� �̿��Ͽ� ���ڸ��� ����� temp �� ����
	while (num >= 10)
	{
		sum += num % 10;
		num /= 10;
	}
	// ���� �ݺ������� 1���ڸ� ���ڴ� �������� �ʾ����Ƿ� ���������� ���ϴ� ������ ����
	sum += num;

	// ����� ���
	printf("���� %d�� �� �ڸ��� ���� %d�Դϴ�. \n", temp, sum);
}

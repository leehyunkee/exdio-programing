#include<stdio.h>

// 문제에 해결하는데 사용될 함수들 미리 정의
void problem1();
void problem2();
int problem3();
void problem4(int);
int isDigit(char);
int numberofDigits(unsigned int);

int main()
{	
	int input; // 3 , 4번 문제에서 사용될 input 값을 지역변수로 선언 

	// problem 1~ problem 4를 순서대로 호출
	problem1();
	problem2();
	input = problem3();
	problem4(input);

	return 0;
}

// 숫자인지 문자인지 판별하는 함수 ( 숫자라면 1을 반환, 아니라면 0을 반환)
int isDigit(char input) // char 자료형 input을 매개 변수로 가진다.
{
	// ASCII코드를 기준으로 문자 '0'과 문자 '9'사이에 input값이 존재한다면 숫자로 판별한다.
	if (input > '0' && input < '9') return 1;
	return 0;
}

// 숫자문자들의 자릿수를 반환하는 함수
int numberofDigits(unsigned int num) // 32비트 양의 정수이므로 unsigned int 자료형을 가진 num을 매개변수로 가진다.
{
	// 값을 반환시킬 int 자료형 answer 변수 선언 및 초기화 (값을 입력받지 않고 그대로 사용하기 때문에 초기화는 필수이다.)
	int answer = 0;

	// num값이 10보다 크거나 같은 경우 반복 (num을 반복적으로 10으로 나누면서 나눈 횟수만큼 자릿수를 나타내는 answer값에 1을 더하는 방식)
	while (num >= 10)
	{
		num /= 10;
		answer++;
	}
	answer++; // 1의 자릿수가 위의 반복문에서 answer에 더해지지 않으므로 추가적으로 1을 더해준다.

	return answer; // answer값을 반환한다.
}

void problem1()
{
	char input; // char형 input값을 선언

	// input값 입력받기
	printf("숫자문자를 입력하세요 (예. 3) : ");
	scanf_s("%c", &input, 1);

	// isDigit함수와 조건문을 사용하여 반환 값에 따라서 숫자인지, 숫자문자가 아닌지 출력.
	if (isDigit(input) == 1) printf("%c는 숫자입니다. \n", input);
	else printf("%c는 숫자문자가 아닙니다 \n", input);
}

void problem2()
{
	char input[5]; // 최대 5개의 문자를 담을 수 있는 배열 input[5]를 생성
	int answer = 0; // 결과값으로 출력할 answer값을 선언 및 초기화
	int temp; // input[i]값들을 임시저장할 int 자료형 tmep를 선언

	printf("최대 다섯개의 숫자 문자들을 한 자리씩 입력해주세요 (ex. 1 2 3 4 5): ");
	for (int i = 0; i < 5; i++)
		scanf_s(" %c", &input[i], 1);

	for (int i = 0; i < 5; i++)
	{
		if (isDigit(input[i]) == 1) // input[i]값이 숫자인 경우
		{
			temp = (int)input[i] - 48; // ASCII 코드에서 숫자들의 번호는 (자기숫자) + 48의 값을 가지므로 int형으로 변환 후, 48을 빼주면 자기 자신의 값으로 변환된다.
			answer += temp; // temp값을 answer값에 더해준다.
			answer *= 10; // 자릿수가 증가해야 하므로 answer값에 10을 곱해준다.
		}
		else // input[i]값이 숫자가 아닌경우 
			break; // break를 통해 바로 반복문에서 빠져나온다.
	}
	answer /= 10; // 반복문을 통해서 나온 결과값이 10이 한번 더 곱해져 있으므로 결과값에서 10을 나누어 준다.

	printf("다섯 자리로 구성된 숫자는 10진수로 %d입니다. \n", answer);
}

int problem3()
{
	unsigned int input; // 32비트 양의 정수를 입력받기 위해서 unsigned int자료형 input을 선언;

	printf("32비트 양의 정수를 입력하세요(최소: 0, 최대: 4294967295) : "); 
	scanf_s("%d", &input);

	printf("%d의 자리수는 %d개 입니다. \n",input, numberofDigits(input)); // numberofDigits 함수를 사용하여 자릿수를 반환

	return input; // problem 4에서 입력값을 그대로 써야하므로 input값을 반환시킴
}

void problem4(int num)
{
	// 문제 해결에 사용될 변수값 초기화
	int sum = 0;

	// num값을 임시 저장해줄 int 자료형 temp값으 선언 후 , num 값으로 초기화;
	int temp = num;

	// 나머지 연산자를 이용하여 한자리씩 떼어내어 temp 에 저장
	while (num >= 10)
	{
		sum += num % 10;
		num /= 10;
	}
	// 위의 반복문에서 1의자리 숫자는 더해지지 않았으므로 마지막으로 더하는 절차를 진행
	sum += num;

	// 결과값 출력
	printf("숫자 %d내 각 자리의 합은 %d입니다. \n", temp, sum);
}

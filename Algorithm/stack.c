//https://www.youtube.com/watch?v=v-PFoP50iRM
#define _CRT_SECURE_NO_WARNINGS

//스택 구현
//기능(함수) : push, pop , peek , del , isEmpty , getSize , print
//1. 역순 문자열 만들기
//2. 수식의 괄호 검사
//3. 수식의 후위 표기법 반환
//4. 후위 표기 수식의 연산

#include<stdio.h>
#include<stdlib.h>

#define STACK_SIZE 100

void push(char input);
void print(void);
char pop(void); // 조회후 삭제
char peek(void); // 스택의 제일 위에 값이 뭔지 조회
void del(void); // 조회 없이 삭제
int isEmpty(void); // 비어있는지 아닌지 확인
int getSize(void); // 현재 스택의 데이터 개수 반환


char stack[STACK_SIZE]; // 스택(배열) 생성
int top = -1;// 스택의 가장 마지막 데이터 위치

int main()
{
	int sel = 1;
	char ch;

	while (sel != 0)
	{
		system("cls"); //화면 클리어 
		printf("<Menu>\n");
		printf("0. quit\n");
		printf("1. print\n");
		printf("2. push\n");
		printf("3. pop\n");
		printf("4. peek\n");
		printf("5. del\n");
		printf("6. isEmpty\n");
		printf("7. getSize\n");
		printf("---------------\n");

		scanf("%d", &sel);
		switch (sel)
		{
		case 1:
			print(); // 스택 전체를 출력
			break;
		case 2:
			scanf(" %c", &ch); // 사용자로부터 문자 입력
			push(ch);
			break;
		case 3:
			if (!isEmpty())
				printf("pop data : %c\n", pop());
			break;
		case 4:
			if (isEmpty())
				printf("data : %c\n", peek()); // 스택의 제일 위에 값이 뭔지 조회
			break;
		case 5:
			if (!isEmpty())
				del();
			break;
		case 6:
			if (isEmpty())
				printf("state : Empty !");
			else
				printf("state : Not Empty !");
			break;
		case 7:
			printf("size : %d\n", getSize());
			break;
		}
		getch(); // 일시정지
	}
	return 0;
}

void push(char input)
{
	if (top >= (STACK_SIZE - 1)) // 스택 가득차면 데이터 넣기 불가능
	{
		printf("Pull !\n");
		return;
	}

	stack[++top] = input; //스택에 데이터 삽입
}

void print(void)
{
	int i;

	//스택 전체를 출력
	printf("<Stack>\n");
	for (i = 0; i <= top; i++)
		printf("%c ", stack[i]);
	printf("\n\n");
}

char pop(void)
{
	if (top == -1)
	{
		printf("Empty !\n");
		return; // 스택이 비어있는 경우는 pop을 할수 없음
	}
	return stack[top--]; // 가장 마지막 데이터 반환
}

char peek(void) // 스택의 제일 위에 값이 뭔지 조회
{
	if (top == -1)
	{
		printf("Empty !\n");
		return;
	}
	return stack[top]; // 가장 마지막에 들어온 데이터를 반환
}

void del(void)
{
	if (top == -1) // 스택 비어있는경우 del 안됨
	{
		printf("Empty !\n");
		return;
	}
	top--;
}

int isEmpty(void) // 비어 있고, 없고 상태애 따라 1 또는 0을 리턴
{
	if (top == -1) // 스택이 비어있음.
		return 1;// true
	else // 스택이 비어있지 않음
		return 0;//false

}

int getSize(void)
{
	return top + 1;// 현재 스택의 데이터 개수 반환
}
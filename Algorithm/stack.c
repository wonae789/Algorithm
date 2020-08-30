//https://www.youtube.com/watch?v=v-PFoP50iRM
#define _CRT_SECURE_NO_WARNINGS

//���� ����
//���(�Լ�) : push, pop , peek , del , isEmpty , getSize , print
//1. ���� ���ڿ� �����
//2. ������ ��ȣ �˻�
//3. ������ ���� ǥ��� ��ȯ
//4. ���� ǥ�� ������ ����

#include<stdio.h>
#include<stdlib.h>

#define STACK_SIZE 100

void push(char input);
void print(void);
char pop(void); // ��ȸ�� ����
char peek(void); // ������ ���� ���� ���� ���� ��ȸ
void del(void); // ��ȸ ���� ����
int isEmpty(void); // ����ִ��� �ƴ��� Ȯ��
int getSize(void); // ���� ������ ������ ���� ��ȯ


char stack[STACK_SIZE]; // ����(�迭) ����
int top = -1;// ������ ���� ������ ������ ��ġ

int main()
{
	int sel = 1;
	char ch;

	while (sel != 0)
	{
		system("cls"); //ȭ�� Ŭ���� 
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
			print(); // ���� ��ü�� ���
			break;
		case 2:
			scanf(" %c", &ch); // ����ڷκ��� ���� �Է�
			push(ch);
			break;
		case 3:
			if (!isEmpty())
				printf("pop data : %c\n", pop());
			break;
		case 4:
			if (isEmpty())
				printf("data : %c\n", peek()); // ������ ���� ���� ���� ���� ��ȸ
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
		getch(); // �Ͻ�����
	}
	return 0;
}

void push(char input)
{
	if (top >= (STACK_SIZE - 1)) // ���� �������� ������ �ֱ� �Ұ���
	{
		printf("Pull !\n");
		return;
	}

	stack[++top] = input; //���ÿ� ������ ����
}

void print(void)
{
	int i;

	//���� ��ü�� ���
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
		return; // ������ ����ִ� ���� pop�� �Ҽ� ����
	}
	return stack[top--]; // ���� ������ ������ ��ȯ
}

char peek(void) // ������ ���� ���� ���� ���� ��ȸ
{
	if (top == -1)
	{
		printf("Empty !\n");
		return;
	}
	return stack[top]; // ���� �������� ���� �����͸� ��ȯ
}

void del(void)
{
	if (top == -1) // ���� ����ִ°�� del �ȵ�
	{
		printf("Empty !\n");
		return;
	}
	top--;
}

int isEmpty(void) // ��� �ְ�, ���� ���¾� ���� 1 �Ǵ� 0�� ����
{
	if (top == -1) // ������ �������.
		return 1;// true
	else // ������ ������� ����
		return 0;//false

}

int getSize(void)
{
	return top + 1;// ���� ������ ������ ���� ��ȯ
}
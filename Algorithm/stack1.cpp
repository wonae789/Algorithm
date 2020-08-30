//https://www.acmicpc.net/problem/10828
//C++ stl 활용 스택 구현
#include<iostream>
#include<string>
#include<stack>
using namespace std;

int main()
{
	stack<int> st;
	string c;
	int N;

	cin >> N;
	cin.get(); // get()은 문자만 받는다. 그냥 cin 은 문자,문자열 다 받는다.

	for (int i = 0; i < N; i++)
	{
		getline(cin, c);

		if (c == "pop")
		{
			if (st.empty())
				cout << -1 << endl;
			else
			{
				cout << st.top() << '\n';
				st.pop();
			}
		}

		else if (c == "top")
		{
			if (st.empty())
				cout << -1 << endl;
			else
			{
				cout << st.top() << '\n';
			}
		}

		else if (c == "empty")
		{
			if (st.empty())
				cout << 1 << endl;
			else
			{
				cout << 0 << endl;
			}
		}

		else if (c == "size")
		{
			cout << st.size() << '\n';
		}
		else
		{
			//https://psychoria.tistory.com/709 stoi
			//https://jhnyang.tistory.com/116 substr
			int num = stoi(c.substr(5)); // stoi 는 문자를 int 로, substr은 자르기
			st.push(num);

		}


	}



	return 0;
}




//C언어로 스택 구현, 내가 직접 만듬

//#define _CRT_SECURE_NO_WARNINGS
//
//#include<stdio.h>
//#include<string.h>
//
//
//int main(void)
//{
//	int i, N, num;
//	int stack[10001];
//
//	int ptr = -1;
//
//	scanf("%d", &N);
//
//	for (i = 0; i < N; i++)
//	{
//		char cmd[10];
//
//		scanf("%s", cmd);
//
//		if (strcmp(cmd, "push") == 0)
//		{
//			scanf("%d", &num);
//			stack[++ptr] = num;
//		}
//
//		else if (strcmp(cmd, "pop") == 0)
//		{
//			if (ptr <= -1)
//				printf("-1\n");
//			else
//			printf("%d\n", stack[ptr--]);
//		}
//		else if (strcmp(cmd, "size") == 0)
//		{
//			if (ptr <= -1)
//				printf("0\n");
//			else
//				printf("%d\n", ptr+1);
//		}
//		else if (strcmp(cmd, "empty") == 0)
//		{
//			if (ptr <= -1)
//				printf("1\n");
//			else
//				printf("0\n");
//		}
//		else if (strcmp(cmd, "top") == 0)
//		{
//			if (ptr == -1)
//				printf("-1\n");
//			else
//			printf("%d\n", stack[ptr]);
//		}
//	}
//}
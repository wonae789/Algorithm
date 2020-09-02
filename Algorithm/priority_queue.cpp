//https://www.acmicpc.net/problem/11279
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include<queue>
//#include<stack>
//#include <vector>
//#include <algorithm>
#define endl '\n'

using namespace std;

int main()
{
	priority_queue<int> pq;  // �⺻ ��������
	//priority_queue<int,deque<int>,greater<int>> pq; // ������������ �ҽ�
	int N;
	scanf("%d", &N);


	for (int i = 0; i < N; i++)
	{
		int num;
		scanf("%d", &num);
		if (num == 0)
		{
			if (pq.empty())
				cout << '0' << endl;
			else
			{
				cout << pq.top() << endl;
				pq.pop();
			}
		}
		else
			pq.push(num);
	}
	return 0;
}

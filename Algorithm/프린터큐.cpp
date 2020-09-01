//https://www.acmicpc.net/problem/1966

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <queue>
#include <vector>
#include <functional>
#include <algorithm>

//#include<stack>
#define endl '\n'

using namespace std;

int main()
{
	queue<int> q;
	queue<int> q1;
	vector<int> v;
	vector<int> v1;
	int test_case;
	int N, M;
	int count = 0;

	scanf("%d", &test_case);

	for (int i = 0; i < test_case; i++)
	{
		scanf("%d %d", &N, &M);

		while (!q.empty())
			q.pop();

		while (!q1.empty())
			q1.pop();

		v.clear();
		//v1.clear();
		count = 0;

		for (int j = 0; j < N; j++)
		{
			int num;
			scanf("%d", &num);
			q.push(num);
			v.push_back(num);
		}
		/*
		int arr[10]; �̷��� ������
		begin(end) == &arr[0]  -> ������
		front(back) == arr[0]   -> ��
		�̷� �����̴�.

		ť�� ��ȸ�� �Ǿհ� �ǵ� ��� ����� �ȵ�.

		*/
		sort(v.begin(), v.end()); // sort�� ���ͷ����� ���ڸ� �޴´�(begin,end �� �ǰ�, front,back�� �ȵ�)

		for (queue<int>::size_type i = 0; i < q.size(); i++)
		{
			if (i == M)
				q1.push(1);
			else
				q1.push(0);

		}
		while (1)
		{
			v1.clear();

			while (q.front() != v.back())
			{
				q.push(q.front());
				q.pop();
				q1.push(q1.front());
				q1.pop();
			}

			q.pop();
			v.pop_back();
			q1.pop();
			count++;
			int q1_size = q1.size();
			for (int i = 0; i < q1_size; i++) // ť�� ���ο� v1 ���Ϳ� �������(ť�� ���� ������ �ȵǰ�, �������� ���Ҽ� �����Ƿ�, ���ͷ� ���ϱ� ����)
			{
				v1.push_back(q1.front());
				q1.pop();
			}
			int sum = 0;
			for (vector<int>::size_type i = 0; i < v1.size(); i++)
			{
				sum += v1[i];
			}
			if (sum == 1) // 1 �� pop ���� �ʾҴٴ� ��
			{
				//sort(v1.begin(), v1.end(), greater<int>()); // ť�� ������������ �ֱ����Ͽ�, ���͸� ������������ ����
				for (vector<int>::size_type i = 0; i < v1.size(); i++) // ���͸� ť�� �ֱ�
				{
					q1.push(v1[i]);
				}
				//count = 0;
			}
			else if (sum == 0)
			{
				printf("%d\n", count);
				break;
			}
		}


	}


	return 0;
}

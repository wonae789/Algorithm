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
		int arr[10]; 이렇게 있으면
		begin(end) == &arr[0]  -> 포인터
		front(back) == arr[0]   -> 값
		이런 느낌이다.

		큐의 조회는 맨앞과 맨뒤 요소 말고는 안됨.

		*/
		sort(v.begin(), v.end()); // sort는 이터레이터 인자를 받는다(begin,end 는 되고, front,back은 안됨)

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
			for (int i = 0; i < q1_size; i++) // 큐를 새로운 v1 백터에 집어넣음(큐는 원소 접근이 안되고, 원소합을 구할수 없으므로, 벡터로 구하기 위함)
			{
				v1.push_back(q1.front());
				q1.pop();
			}
			int sum = 0;
			for (vector<int>::size_type i = 0; i < v1.size(); i++)
			{
				sum += v1[i];
			}
			if (sum == 1) // 1 이 pop 되지 않았다는 뜻
			{
				//sort(v1.begin(), v1.end(), greater<int>()); // 큐에 오른차순으로 넣기위하여, 벡터를 내림차순으로 정렬
				for (vector<int>::size_type i = 0; i < v1.size(); i++) // 백터를 큐에 넣기
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

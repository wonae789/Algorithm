//https://www.acmicpc.net/problem/11866
//https://www.youtube.com/watch?v=EtcfuaFbvqk
#include<iostream>
#include<queue>
#include<vector>
using namespace std;


int main(void)
{
	int N, K;
	vector<int> v;
	queue<int> q;
	scanf("%d %d", &N, &K);

	for (int i = 0; i < N; i++)
	{
		q.push(i + 1);
	}

	while (!q.empty()) // ¶Ç´Â q.size()
	{
		for (int i = 1; i < K; i++)
		{
			q.push(q.front());
			q.pop();
		}
		v.push_back(q.front());
		q.pop();
	}

	printf("<%d", v[0]);
	for (vector<int>::size_type i = 1; i < v.size(); i++)
	{
		printf(", %d", v[i]);
	}
	printf(">");

	return 0;
}

//int main(void)
//{
//	int N, K;
//	queue<int> q;
//	cin >> N >> K;
//
//	for (int i = 0; i < N; i++)
//	{
//		q.push(i + 1);
//	}
//
//	cout << '<';
//
//	while (!(q.size() == 1))
//	{
//		for (int i = 1; i < K; i++)
//		{
//			q.push(q.front());
//			q.pop();
//		}
//		cout << q.front() << ", ";
//		q.pop();
//	}
//	cout << q.front();
//	cout << '>';
//
//
//	return 0;
//}
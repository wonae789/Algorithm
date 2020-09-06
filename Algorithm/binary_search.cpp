//https://www.acmicpc.net/problem/1920
//수 찾기(이진탐색)

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
//#include<queue>
//#include<stack>
#include <vector>
#include <algorithm>
#define endl '\n'

using namespace std;


int main()
{
	vector<int> v1, v2;
	int N;
	scanf("%d", &N);
	for (int i = 0; i < N; i++)
	{
		int num;
		scanf("%d", &num);
		v1.push_back(num);

	}

	int M;
	scanf("%d", &M);
	for (int i = 0; i < M; i++)
	{
		int num;
		scanf("%d", &num);
		v2.push_back(num);

	}

	sort(v1.begin(), v1.end());


	for (int i = 0; i < M; i++)
	{
		if (binary_search(v1.begin(), v1.end(), v2[i]))
			printf("1\n");
		else
			printf("0\n");
	}
	return 0;
}


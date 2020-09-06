//https://www.acmicpc.net/problem/10816
//https://www.crocus.co.kr/913
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
		int num = 0;
		if (binary_search(v1.begin(), v1.end(), v2[i]))
		{
			//����Ž������ ���ĵ� ������ ����ó�� �߰ߵ� �ε���(lower_bound) , ���� ���߿� �߰ߵ� �ε���(upper_bound) ���� ��
			num = upper_bound(v1.begin(), v1.end(), v2[i]) - lower_bound(v1.begin(), v1.end(), v2[i]);
			printf("%d ", num);
		}
		else
			printf("%d ", num);
	}
	return 0;
}
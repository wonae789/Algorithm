//https://www.acmicpc.net/problem/11004
//K��° ��
#include <iostream>
#include <vector>
#include <algorithm>

#define endl '\n'

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int N, K, PUT;
	cin >> N >> K;
	vector<int> vec;

	for (int i = 0; i < N; i++)
	{
		cin >> PUT;
		vec.push_back(PUT);
	}

	sort(vec.begin(), vec.end()); // ��������
	/*
	�������������� #include <funtional> �߰��ϰ�
	sort(vec.begin(), vec.end(), greater<int>()); �̷��� ����
	https://blankspace-dev.tistory.com/160?category=647810
	*/
	cout << vec[K - 1];

	return 0;
}
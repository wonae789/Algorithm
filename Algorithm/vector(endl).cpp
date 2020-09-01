//https://www.acmicpc.net/problem/11004
//K번째 수
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

	sort(vec.begin(), vec.end()); // 오름차순
	/*
	내림차순정렬은 #include <funtional> 추가하고
	sort(vec.begin(), vec.end(), greater<int>()); 이렇게 쓴다
	https://blankspace-dev.tistory.com/160?category=647810
	*/
	cout << vec[K - 1];

	return 0;
}
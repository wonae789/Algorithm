//https://www.acmicpc.net/problem/11004
//K¹øÂ° ¼ö
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

	sort(vec.begin(), vec.end());

	cout << vec[K - 1];

	return 0;
}
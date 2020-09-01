//https://www.acmicpc.net/problem/2156
//https://yabmoons.tistory.com/18

#include<iostream>
#include<vector>
using namespace std;

int max(int a, int b)
{
	if (a > b)
		return a;
	else
		return b;
}

int main(void)
{
	int n;
	int DP[100001];
	vector<int> vec;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		int num;
		cin >> num;
		vec.push_back(num);
	}

	for (int i = 0; i < n; i++)
	{
		if (i == 0)
			DP[i] = vec[i];
		else if (i == 1)
			DP[i] = vec[i - 1] + vec[i];
		else
			DP[i] = max(DP[i - 3] + vec[i - 1] + vec[i], (max(DP[i - 2] + vec[i], DP[i - 1])));

	}

	cout << DP[n - 1] << endl;

	return 0;
}
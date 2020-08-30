//https://www.acmicpc.net/problem/10773
#include<iostream>
#include<stack>

using namespace std;

int main(void)
{
	stack<int> st;
	int sum = 0;
	int K;

	cin >> K;

	for (int i = 0; i < K; i++)
	{
		int num;
		cin >> num;

		if (num == 0)
		{
			st.pop();
		}
		else
		{
			st.push(num);
		}
	}
	//모든 원소를 더하는 방법
	while (!st.empty())
	{
		sum += st.top();
		st.pop();
	}

	cout << sum;

	return 0;
}
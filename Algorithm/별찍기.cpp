//https://www.acmicpc.net/problem/10991
//https://www.youtube.com/watch?v=cMLN9yHJDIs 풀이
//별찍기
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int N;
	int i, j;
	cin >> N;

	for (i = 1; i <= N; i++)
	{
		for (j = i; j < N; j++)
		{
			cout << " ";
		}

		//1 2 3 5 씩 늘어남
		for (j = 1; j <= 2 * (i - 1) + 1; j++)
		{
			if (i == 1 || i == N)
				cout << "*";

			else if (j == 1 || j == 2 * (i - 1) + 1)
				cout << "*";
			else
				cout << " ";
		}
		cout << endl;
	}
	return 0;
}
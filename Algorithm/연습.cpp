#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
//#include <string>
//#include <queue>
//#include <stack>
#include <algorithm>
//#include <cmath>
#define endl '\n'

using namespace std;

int main()
{
	int n = 5;
	int answer = 1;
	for (int i = 3; i <= n; i++)
	{
		int toggle = 0;
		for (int j = i - 1; j >= 1; j--)
		{
			if (j == 1 && toggle == 0)
				answer++;
			else if (i % j == 0)
				toggle = 1;
		}

	}

	printf("%d", answer);

	return 0;
}


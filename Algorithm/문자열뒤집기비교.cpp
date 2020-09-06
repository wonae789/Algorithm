//https://swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AV5PyTLqAf4DFAUq&categoryId=AV5PyTLqAf4DFAUq&categoryType=CODE
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
#include <string>
//#include <queue>
//#include <stack>
#include <algorithm>
#define endl '\n'

using namespace std;

int main()
{
	vector<char> v;
	string str;
	int T;

	scanf("%d", &T);

	for (int i = 1; i <= T; i++)
	{
		cin >> str;
		string temp = str;
		reverse(str.begin(), str.end());

		if (temp == str)
			printf("#%d %d\n", i, 1);
		else
			printf("#%d %d\n", i, 0);

	}
	return 0;
}


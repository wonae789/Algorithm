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
	int test_case;
	int T;

	scanf("%d", &T);

	vector<int> v;

	for (test_case = 1; test_case <= T; ++test_case)
	{
		v.clear();
		for (int i = 0; i < 10; i++)
		{
			int num;
			scanf("%d ", &num);
			v.push_back(num);
		}

		sort(v.begin(), v.end());
		double sum = 0;
		for (int i = 1; i < v.size()-1; i++)
		{
			sum += v[i];
		}

		double aver;
		aver = sum / (v.size() - 2);
		printf("#%d %.f\n", test_case, aver);
	}

	
	return 0;
}


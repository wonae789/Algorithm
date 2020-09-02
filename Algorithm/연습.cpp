#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
//#include<queue>
//#include<stack>
#include <vector>
//#include <algorithm>
#define endl '\n'

using namespace std;

int main()
{
	vector<int> v;
	int N;
	scanf("%d", &N);

	for (int i = 0; i < N; i++)
	{
		int num;
		scanf("%d", &num);

		if (num == 0)
		{
			for (int i = 0; i < v.size(); i++)
			{
				abs(v[i]);
			}
		}

		else
		{
			v.push_back(num);
		}

	}








	v.push_back(-1);
	v.push_back(3);

	cout << abs(v[0]);

	return 0;
}

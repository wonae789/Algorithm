#include <iostream>
#include <vector>
//#include <algorithm>
#define endl '\n'

using namespace std;

void Recursion(vector<int>& ptr)
{
	cout << ptr.size() << ' ' << ptr[0];

	for (int i = 0; i < )


}

int main()
{
	int k;
	vector<int> S;

	while (1)
	{
		cin >> k;
		if (k == 0)
			break;

		for (int i = 0; i < k; i++)
		{
			S.push_back(i);
		}

		Recursion(S);
		break;
	}

	return 0;
}

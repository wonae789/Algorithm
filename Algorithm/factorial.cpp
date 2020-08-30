#include <iostream>
//#include <vector>
//#include <algorithm>
#define endl '\n'

using namespace std;

int Recursion(int N)
{
	if (N == 0)
		return 1;
	return N * Recursion(N - 1);
}

int main()
{

	int N;
	cin >> N;

	cout << Recursion(N);

	return 0;
}

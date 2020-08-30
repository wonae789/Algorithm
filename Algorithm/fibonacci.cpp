#include <iostream>
//#include <vector>
//#include <algorithm>
#define endl '\n'

using namespace std;

int a[21];

int Recursive(int n)
{
	if (a[n] != 0)
		return a[n];
	if (n == 0)
		return a[n] = 0;
	if (n == 1)
		return a[n] = 1;


	return a[n] = Recursive(n - 1) + Recursive(n - 2);
}


int main()
{
	int n;

	cin >> n;
	cout << Recursive(n);

	return 0;
}

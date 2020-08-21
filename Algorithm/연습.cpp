#include <iostream>
#include<string>
#include<cmath>
using namespace std;


int main()
{
	string str;
	int N;
	cin >> N;

	for (int i = 1; i < pow(10,N); i++) // pow 승수함수 10 의 N제곱, cmath 인클루드 필요함.
	{
		str[i] = i;


	}


	return 0;
}
#include <iostream>
#include<string>
#include<cmath>
using namespace std;


int main()
{
	string str;
	int N;
	cin >> N;

	for (int i = 1; i < pow(10,N); i++) // pow �¼��Լ� 10 �� N����, cmath ��Ŭ��� �ʿ���.
	{
		str[i] = i;


	}


	return 0;
}
//https://www.acmicpc.net/problem/11720
//숫자의합
#include<iostream>
#include<string>
using namespace std;

int main(void)
{
	int num, sum = 0;
	string str;

	cin >> num;
	cin >> str;
	for (int i = 0; i < num; i++)
	{
		sum += str[i] - '0';//48
	}
	cout << sum;
	return 0;
}
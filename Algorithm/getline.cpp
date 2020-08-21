// https://www.acmicpc.net/problem/11718
#include<iostream>
#include<string>
using namespace std;

int main(void)
{
	string str;

	//getline은 개행, 스페이스등 모두 입력받는다.
	while (getline(cin, str))
	{
		cout << str << endl;
	}


	return 0;
}
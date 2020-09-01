//https://www.acmicpc.net/problem/9012
#include<iostream>
#include<stack>
#include<string>
using namespace std;

stack<char> st;

int check(string str) {

	while (!st.empty())
		st.pop();

	for (int i = 0; i < str.size(); i++)
	{
		if (str[i] == '(')
		{
			st.push(str[i]);
		}

		else if (str[i] == ')')
		{
			if (st.empty())
				return false;
			else
				st.pop();
		}
	}

	if (st.empty())
		return true;
	else
		return false;

}


int main(void)
{
	string str;
	int T;

	cin >> T;

	for (int i = 0; i < T; i++)
	{
		string str = "";
		cin >> str;
		if (check(str))
			cout << "YES" << endl;
		else
			cout << "NO" << endl;


	}

	return 0;
}
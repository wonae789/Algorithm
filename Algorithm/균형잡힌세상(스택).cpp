//https://www.acmicpc.net/problem/4949
#include<iostream>
#include<stack>
#include<string>
using namespace std;



int main(void)
{
	string str;
	stack<char> st;


	while (1) {
		//string str = "";
		getline(cin, str);

		if (str.length() == 1 && str[0] == '.')
			break;

		while (!st.empty())
			st.pop();

		bool flag = true;

		for (int i = 0; i < str.length(); i++) {
			if (str[i] == '(' || str[i] == '[')
				st.push(str[i]);
			if (str[i] == ')') {
				if (!st.empty() && st.top() == '(')
					st.pop();
				else {
					flag = false;
					break;
				}
			}
			if (str[i] == ']') {
				if (!st.empty() && st.top() == '[')
					st.pop();
				else {
					flag = false;
					break;
				}
			}
		}
		if (flag && st.empty())
			cout << "yes" << endl;
		else
			cout << "no" << endl;

	}
	return 0;
}
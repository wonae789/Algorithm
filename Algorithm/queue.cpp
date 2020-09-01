//https://www.acmicpc.net/problem/18258
#include<iostream>
//#include<stack>
#include<queue>
#include<string>
#define endl '\n'

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	queue<int> qu;
	string str;

	int N;
	cin >> N;
	//cin.get();
	for (int i = 0; i < N; i++)
	{
		//str = "";
		//getline(cin, str);
		cin >> str;

		if (str == "front")
		{
			if (qu.size() == 0)
				cout << -1 << endl;
			else
				cout << qu.front() << endl;
		}

		else if (str == "back")
		{
			if (qu.size() == 0)
				cout << -1 << endl;
			else
				cout << qu.back() << endl;
		}
		else if (str == "size")
		{
			cout << qu.size() << endl;
		}
		else if (str == "empty")
		{
			if (qu.empty())
				cout << 1 << endl;
			else
				cout << 0 << endl;
		}
		else if (str == "pop")
		{
			if (qu.size() == 0)
				cout << -1 << endl;
			else
			{
				cout << qu.front() << endl;
				qu.pop();
			}
		}
		else
		{
			int num;

			cin >> num;
			//int num = stoi(str.substr(5));
			qu.push(num);
		}
	}

	return 0;
}
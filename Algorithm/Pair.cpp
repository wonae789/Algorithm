#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	vector<pair<int, string>> v;

	v.push_back(pair<int, string>(90, "���ѿ�"));
	v.push_back(pair<int, string>(91, "�׽�Ʈ"));
	v.push_back(pair<int, string>(85, "������"));
	v.push_back(pair<int, string>(72, "������"));
	v.push_back(pair<int, string>(52, "������"));

	sort(v.begin(), v.end());


	for (vector<int>::size_type i = 0; i < v.size(); ++i)
	{
		cout << v[i].second << ' ';
	}

	return 0;
}
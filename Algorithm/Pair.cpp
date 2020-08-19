#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	vector<pair<int, string>> v;

	v.push_back(pair<int, string>(90, "박한울"));
	v.push_back(pair<int, string>(91, "테스트"));
	v.push_back(pair<int, string>(85, "나정비"));
	v.push_back(pair<int, string>(72, "김잡이"));
	v.push_back(pair<int, string>(52, "강사은"));

	sort(v.begin(), v.end());


	for (vector<int>::size_type i = 0; i < v.size(); ++i)
	{
		cout << v[i].second << ' ';
	}

	return 0;
}
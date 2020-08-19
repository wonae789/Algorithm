//학생을 나타낼 수 있는 정보가 이름, 성적, 생년월일일 때 학생을 성적 순서대로 나열하고자 한다. 
//다만 성적이 동일한 경우 나이가 더 어린 학생이 더 우선순위가 높다.

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(pair<string, pair<int, int>> a, pair<string, pair<int, int>> b)
{
	if (a.second.first == b.second.first)
		return a.second.second > b.second.second;
	else
	{
		return a.second.first > b.second.first;
	}
}

int main()
{
	vector<pair<string, pair<int,int>>> v;

	v.push_back(pair<string, pair<int,int>>("박한울",make_pair(90,19910212)));
	v.push_back(pair<string, pair<int,int>>("테스트",make_pair(90,19920212)));
	v.push_back(pair<string, pair<int,int>>("나정비",make_pair(90,19930212)));
	v.push_back(pair<string, pair<int,int>>("김잡이",make_pair(90,19940212)));
	v.push_back(pair<string, pair<int,int>>("강사은",make_pair(90,19950212)));

	sort(v.begin(), v.end(),compare); // compare 넣으면 조건을 걸수 있다.


	for (vector<int>::size_type i = 0; i < v.size(); ++i)
	{
		cout << v[i].first << ' ';
	}

	return 0;
}
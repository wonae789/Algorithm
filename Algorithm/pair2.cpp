//�л��� ��Ÿ�� �� �ִ� ������ �̸�, ����, ��������� �� �л��� ���� ������� �����ϰ��� �Ѵ�. 
//�ٸ� ������ ������ ��� ���̰� �� � �л��� �� �켱������ ����.

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

	v.push_back(pair<string, pair<int,int>>("���ѿ�",make_pair(90,19910212)));
	v.push_back(pair<string, pair<int,int>>("�׽�Ʈ",make_pair(90,19920212)));
	v.push_back(pair<string, pair<int,int>>("������",make_pair(90,19930212)));
	v.push_back(pair<string, pair<int,int>>("������",make_pair(90,19940212)));
	v.push_back(pair<string, pair<int,int>>("������",make_pair(90,19950212)));

	sort(v.begin(), v.end(),compare); // compare ������ ������ �ɼ� �ִ�.


	for (vector<int>::size_type i = 0; i < v.size(); ++i)
	{
		cout << v[i].first << ' ';
	}

	return 0;
}
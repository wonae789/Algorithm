//https://www.acmicpc.net/problem/10818
//�ּ�, �ִ�

#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int N, M;
	cin >> N;
	int Min = 1000001;
	int Max = -1000001;

	for (int i = 0; i < N; i++)
	{
		cin >> M;
		Min = min(Min, M); // algorithm ��� min max �Լ� ���(��1,��2)
		Max = max(Max, M); // ��1�� ��2 ��
	}

	cout << Min << ' ' << Max << '\n'; // endl ���� '\n'�� �ӵ� �� ����


	return 0;
}
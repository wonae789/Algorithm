//https://www.acmicpc.net/problem/11286
//���밪 ��
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include<queue>
//#include <vector>
//#include<stack>
//#include <algorithm>
#define endl '\n'

using namespace std;

typedef pair<int, int> pi;
int main()
{
	priority_queue<pi, vector<pi>, greater<pi>> pq;

	int N;
	scanf("%d", &N);

	for (int i = 0; i < N; i++) {
		int num;
		scanf("%d", &num);

		if (num == 0) {
			if (pq.empty())
				printf("0\n");
			//pq �� ������ ����Ǿ� ù��° first �κ��� ��������(ū����)���� ���ĵ� ����
			else {
				printf("%d\n", pq.top().second);
				pq.pop();
			}
		}

		else {
			pq.push(make_pair(abs(num), num));
		}
	}

}

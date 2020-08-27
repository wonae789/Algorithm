//https://www.youtube.com/watch?v=nNZuzNny2-k
#include <iostream>
#include <vector>
#include <algorithm>
#define endl '\n'

using namespace std;

int N, M, V;

int graph[1001][1001];
int visit[1001];
int queue[1001];
int front, rear; // ť�� Ǫ��, �� �Ҷ� ����.
void bfs(int idx)
{
	queue[rear++] = idx;
	visit[idx] = 1;
	while (front < rear) // ������� �ʴٴ� ��
	{
		int current_idx = queue[front++];
		cout << current_idx << ' ';
		for (int next_idx = 1; next_idx <= N; next_idx++)
		{
			if (graph[current_idx][next_idx] == 1 && visit[next_idx] == 0)
			{
				queue[rear++] = next_idx;// ���� �̾����ִ� rear�� �� ã��, front�� 1�� ���ϸ鼭 ����
				visit[next_idx] = 1;
			}
		}
	}
}

void dfs(int idx)
{
	visit[idx] = 1;
	cout << idx << " ";

	// for���� �������� ������� �˻��ϱ� ������ �������� �켱���� ���Ҹ� �߰��Ѵ�
	for (int next_idx = 1; next_idx <= N; ++next_idx)
	{
		if (graph[idx][next_idx] == 1 && visit[next_idx] == 0) // �ش� 2�����迭�� 1 �̸鼭, visit �� ��� ������.
		{
			dfs(next_idx);
		}
	}
}

int main()
{
	cin >> N >> M >> V;

	for (int i = 0; i < M; i++)
	{
		int V1, V2;
		cin >> V1 >> V2;
		graph[V1][V2] = 1;
		graph[V2][V1] = 1;
	}
	int start_idx = V;
	dfs(start_idx);

	fill(visit, visit + 1001, 0); // �˰��� ��� �ʿ� (�����ּ�,���ּ�,�ʱ�ȭ�� ����)
	cout << endl;

	bfs(start_idx);
	return 0;
}


//https://blog.naver.com/ndb796/221230945092
//#include <iostream>
//#include <vector>
//using namespace std;
//
//int number = 7;
//int c[8];
//vector<int> a[8];
//
//void dfs(int x)
//{
//	if (c[x]) return;
//	c[x] = true;
//	cout << x << ' ';
//	for (vector<int>::size_type i = 0; i < a[x].size(); i++)
//	{
//		int y = a[x][i];
//		dfs(y);
//	}
//}
//
//int main()
//{
//	a[1].push_back(2);
//	a[2].push_back(1);
//	 1�� 3�� �����մϴ�.
//	a[1].push_back(3);
//	a[3].push_back(1);
//	 2�� 3�� �����մϴ�.
//	a[2].push_back(3);
//	a[3].push_back(2);
//	 2�� 4�� �����մϴ�. 
//	a[2].push_back(4);
//	a[4].push_back(2);
//	 2�� 5�� �����մϴ�.
//	a[2].push_back(5);
//	a[5].push_back(2);
//	 3�� 6�� �����մϴ�.
//	a[3].push_back(6);
//	a[6].push_back(3);
//	 3�� 7�� �����մϴ�.
//	a[3].push_back(7);
//	a[7].push_back(3);
//	 4�� 5�� �����մϴ�.
//	a[4].push_back(5);
//	a[5].push_back(4);
//	 6�� 7�� �����մϴ�.
//	a[6].push_back(7);
//	a[7].push_back(6);
//	 DFS�� �����մϴ�.
//	dfs(1);
//	return 0;
//}

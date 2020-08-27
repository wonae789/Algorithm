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
int front, rear; // 큐를 푸시, 팝 할때 쓴다.
void bfs(int idx)
{
	queue[rear++] = idx;
	visit[idx] = 1;
	while (front < rear) // 비어있지 않다는 뜻
	{
		int current_idx = queue[front++];
		cout << current_idx << ' ';
		for (int next_idx = 1; next_idx <= N; next_idx++)
		{
			if (graph[current_idx][next_idx] == 1 && visit[next_idx] == 0)
			{
				queue[rear++] = next_idx;
				visit[next_idx] = 1;
			}
		}
	}
}

void dfs(int idx)
{
	visit[idx] = 1;
	cout << idx << " ";

	// for문이 오름차순 순서대로 검색하기 때문에 오름차순 우선으로 원소를 발견한다
	for (int next_idx = 1; next_idx <= N; ++next_idx)
	{
		if (graph[idx][next_idx] == 1 && visit[next_idx] == 0) // 해당 2차원배열이 1 이면서, visit 이 비어 있으면.
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

	fill(visit, visit + 1001, 0); // 알고리즘 헤더 필요 (시작주소,끝주소,초기화할 숫자)
	cout << endl;

	bfs(start_idx);
	return 0;
}

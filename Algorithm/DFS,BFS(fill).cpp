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
				queue[rear++] = next_idx;// 선이 이어져있는 rear를 쭉 찾고, front를 1씩 더하면서 진행
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
//	 1과 3를 연결합니다.
//	a[1].push_back(3);
//	a[3].push_back(1);
//	 2과 3를 연결합니다.
//	a[2].push_back(3);
//	a[3].push_back(2);
//	 2과 4을 연결합니다. 
//	a[2].push_back(4);
//	a[4].push_back(2);
//	 2과 5를 연결합니다.
//	a[2].push_back(5);
//	a[5].push_back(2);
//	 3와 6를 연결합니다.
//	a[3].push_back(6);
//	a[6].push_back(3);
//	 3와 7을 연결합니다.
//	a[3].push_back(7);
//	a[7].push_back(3);
//	 4와 5를 연결합니다.
//	a[4].push_back(5);
//	a[5].push_back(4);
//	 6과 7을 연결합니다.
//	a[6].push_back(7);
//	a[7].push_back(6);
//	 DFS를 수행합니다.
//	dfs(1);
//	return 0;
//}

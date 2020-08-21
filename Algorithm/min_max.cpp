//https://www.acmicpc.net/problem/10818
//최소, 최대

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
		Min = min(Min, M); // algorithm 헤더 min max 함수 사용(값1,값2)
		Max = max(Max, M); // 값1과 값2 비교
	}

	cout << Min << ' ' << Max << '\n'; // endl 보다 '\n'이 속도 더 빠름


	return 0;
}
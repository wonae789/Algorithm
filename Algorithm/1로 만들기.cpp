//https://www.acmicpc.net/problem/1463
//https://kgh940525.tistory.com/entry/%EC%95%8C%EA%B3%A0%EB%A6%AC%EC%A6%98-%EB%B0%B1%EC%A4%80-%EC%95%8C%EA%B3%A0%EB%A6%AC%EC%A6%98-1463-1%EB%A1%9C-%EB%A7%8C%EB%93%A4%EA%B8%B0TopDownBottomUp-C
//1로 만들기
#include<iostream> 
using namespace std;

int dp[1000001];

int recursive(int num)
{
	if (num == 1)
		return 0;

	if (dp[num] > 0)
		return dp[num];

	dp[num] = recursive(num - 1) + 1;

	if (num % 2 == 0)
	{
		int save = recursive(num / 2) + 1;
		if (dp[num] > save)
			dp[num] = save;
	}

	if (num % 3 == 0)
	{
		int save = recursive(num / 3) + 1;
		if (dp[num] > save)
			dp[num] = save;
	}



	return dp[num];
}

int main(void) 
{
	int num;
	cin >> num;
	cout << recursive(num) << endl;


	return 0;
}

//#include<iostream> 
//using namespace std;
//
//int Dp[1000001];
//
//int min(int a, int b) {
//	return a > b ? b : a;
//}
//
//int main(void) {
//
//	int N;
//	cin >> N;
//
//	Dp[1] = 0;
//
//	for (int i = 2; i <= N; i++)
//	{
//		Dp[i] = Dp[i - 1] + 1;
//		if (i % 2 == 0)
//			Dp[i] = min(Dp[i], Dp[i / 2] + 1);
//		if (i % 3 == 0)
//			Dp[i] = min(Dp[i], Dp[i / 3] + 1);
//	}
//	cout << Dp[N] << endl;;
//
//	return 0;
//}
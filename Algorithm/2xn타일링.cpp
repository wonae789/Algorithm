//https://www.acmicpc.net/problem/11726
//https://www.youtube.com/watch?v=Qvg-5abaOZQ
//2xn ≈∏¿œ∏µ

#include<iostream>
using namespace std;

int a[100001];

int Fibonacci(int num)
{

	if (num == 1)
		return 1;
	if (num == 2)
		return 2;
	if (a[num] > 0)
		return a[num];
	a[num] = (Fibonacci(num - 2) + Fibonacci(num - 1)) % 10007;
	return a[num];
}

int main()
{
	int num;
	cin >> num;

	cout << Fibonacci(num) << endl;


	return 0;
}
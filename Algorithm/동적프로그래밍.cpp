//https://www.youtube.com/watch?v=K15qLnKKrow
#include<iostream> 
using namespace std;

int f[1000001] = { 0, };

int fib(int n)
{
	if (n == 1 || n == 2)
		return 1;
	else if (f[n] > -1)
		return f[n];
	else {
		f[n] = fib(n - 1) + fib(n - 1);
		return f[n];
	}

}


int main(void) {




	return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
#include <string>
#include <cstring>
//#include <queue>
//#include <stack>
#include <algorithm>
//#include <cmath>
#include <cstdlib>
#define endl '\n'

using namespace std;

int main()
{
    int x = 10;
    bool answer = true;

    int n = x;
    int num = 0;

    while (n != 0)
    {
        num += n % 10;
        n=n / 10;
    }

    if (x % num != 0)
        answer = false;
    cout << answer;
    return 0;
}


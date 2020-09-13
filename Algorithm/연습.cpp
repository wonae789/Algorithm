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
    int num = 626331;
    int answer = 0;

    int count = 0;

    while (num != 1 && count <= 500)
    {
        if (num % 2 == 0)
        {
            num = num / 2;
            count++;
            if (num == 1)
                break;
        }

        else if (num % 2 == 1)
        {
            num = num * 3 + 1;
            count++;
            if (num == 1)
                break;
        }

    }

    answer = count;
    cout << answer;
	return 0;
}


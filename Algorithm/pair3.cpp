#include<iostream>
#include<algorithm>
using namespace std;

int main(void)
{
    pair<int, int> p[10];
    int a, b, c;
    cin >> c;
    for (int i = 0; i < c; i++)
    {
        cin >> a >> b;
        p[i].first = a;
        p[i].second = b;
    }
    for (int i = 0; i < c; i++)
    {
        cout << p[i].first + p[i].second << endl;
    }
    return 0;
}
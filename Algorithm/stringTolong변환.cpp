//https://programmers.co.kr/learn/courses/30/lessons/12933
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

long long solution(long long n) {
    long long answer = 0;

    string s = to_string(n); // ��Ʈ������ ��ȯ

    sort(s.begin(), s.end(), greater<char>());

    answer = stoll(s); // string �� long long ������ ��ȯ

    return answer;
}
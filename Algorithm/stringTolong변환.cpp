//https://programmers.co.kr/learn/courses/30/lessons/12933
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

long long solution(long long n) {
    long long answer = 0;

    string s = to_string(n); // 스트링으로 변환

    sort(s.begin(), s.end(), greater<char>());

    answer = stoll(s); // string 을 long long 형으로 변환

    return answer;
}
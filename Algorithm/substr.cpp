//https://programmers.co.kr/learn/courses/30/lessons/12903
//https://jhnyang.tistory.com/116
#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    int len = s.length();
    if (len % 2 == 0) {
        return s.substr(len / 2 - 1, 2); // 짝수  len/2 -1 위치의 인덱스부터, 2개( len/2 -1 위치 와 다음 인덱스)
    }
    else {
        return s.substr(len / 2, 1); // 홀수  len/2 위치의 인덱스부터 , 그 인덱스 까지(1개)
    }
}
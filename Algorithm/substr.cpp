//https://programmers.co.kr/learn/courses/30/lessons/12903
//https://jhnyang.tistory.com/116
#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    int len = s.length();
    if (len % 2 == 0) {
        return s.substr(len / 2 - 1, 2); // ¦��  len/2 -1 ��ġ�� �ε�������, 2��( len/2 -1 ��ġ �� ���� �ε���)
    }
    else {
        return s.substr(len / 2, 1); // Ȧ��  len/2 ��ġ�� �ε������� , �� �ε��� ����(1��)
    }
}
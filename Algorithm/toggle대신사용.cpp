//https://programmers.co.kr/learn/courses/30/lessons/12922
//https://programmers.co.kr/learn/courses/30/lessons/12922/solution_groups?language=cpp
#include <string>
#include <vector>

using namespace std;

string solution(int n) {
    string answer = "";

    for (int i = 0; i < n; i++)
        i & 1 ? answer += "박" : answer += "수";
    //비트연산자중 AND 연산자이고 홀수인지를 판단하는 식입니다. 1은 이진수로 0000....0001 이고, 
    //홀수의 이진수는 항상 xxxx...xxx1 이 됩니다. 1과 홀수를 AND 연산하면 1이 리턴되고 1은 조건식에서 참을 의미합니다.

    return answer;
}
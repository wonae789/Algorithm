//https://programmers.co.kr/learn/courses/30/lessons/12922
//https://programmers.co.kr/learn/courses/30/lessons/12922/solution_groups?language=cpp
#include <string>
#include <vector>

using namespace std;

string solution(int n) {
    string answer = "";

    for (int i = 0; i < n; i++)
        i & 1 ? answer += "��" : answer += "��";
    //��Ʈ�������� AND �������̰� Ȧ�������� �Ǵ��ϴ� ���Դϴ�. 1�� �������� 0000....0001 �̰�, 
    //Ȧ���� �������� �׻� xxxx...xxx1 �� �˴ϴ�. 1�� Ȧ���� AND �����ϸ� 1�� ���ϵǰ� 1�� ���ǽĿ��� ���� �ǹ��մϴ�.

    return answer;
}
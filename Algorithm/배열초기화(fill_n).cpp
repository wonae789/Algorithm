#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
#include <string>
#include <cstring>
//#include <queue>
//#include <stack>
#include <algorithm>
//#include <cmath>
#define endl '\n'

using namespace std;

int main()
{
	// ----�Ϲ� �迭 �ʱ�ȭ----
	int a[5];
	fill_n(a, 5, 1); // a= �����ּ� or �̸�, ���� , �ʱ�ȭ�� ��


	// ----fill_n ���� �迭 �ʱ�ȭ (memset���� �ȵǴ� �ٸ��� �ʱ�ȭ �ϰ� ������)----
	// #include <algoritm> ��� �ʿ���
	//https://namwhis.tistory.com/entry/C-%EB%B0%B0%EC%97%B4-%EC%B4%88%EA%B8%B0%ED%99%94-stdfill-stdfilln-%EC%A0%95%EB%A6%AC

	int n = 5;
	int* p = new int[n];
	//fill(p, p + 5, 1);// a= �����ּ� or �̸�, �����ּ�(�򰥸�) , �ʱ�ȭ�� ��
	fill_n(p, n, 1); // a= �����ּ� or �̸�, ���� , �ʱ�ȭ�� ��

	/* �߰��� �ּ�ǥ�� ���̸� ����
	fill_n(p, 5, 1);
	fill_n(�����Ϸ��� ������ ���� �����ּ�, �����Ϸ��� ���� ����, ���� ��)

	fill(p, p + 5, 1);
	fill(�����Ϸ��� ������ ���� �����ּ�, �����Ϸ��� ������ ���� �����ּ�, ���� ��)
	*/


	// ----memset ���� �迭 �ʱ�ȭ (-1, 0 �ۿ� �ʱ�ȭ �ȵ�)----
	// #include<cstring> ��� �ʿ���
	//https://torbjorn.tistory.com/297


	int k = 5;
	int* q = new int[k];
	memset(q, 0, k * sizeof(int)); //q = �����ּ�, �ʱ�ȭ�� ��, ũ��(�������϶�)(�Ϲݹ迭�� sizeof(�迭�̸�)



	// -- vector �ʱ�ȭ 
	vector<int> v(8);

	fill(v.begin(), v.end(), 4);







	// ����� ����Ŀ��� �����迭���� ������  p, 5   �̷��� ������ �����ؾߵ�




	printf("%d");


	return 0;
}


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
	// ----일반 배열 초기화----
	int a[5];
	fill_n(a, 5, 1); // a= 시작주소 or 이름, 갯수 , 초기화할 값


	// ----fill_n 동적 배열 초기화 (memset으로 안되는 다른값 초기화 하고 싶을때)----
	// #include <algoritm> 헤더 필요함
	//https://namwhis.tistory.com/entry/C-%EB%B0%B0%EC%97%B4-%EC%B4%88%EA%B8%B0%ED%99%94-stdfill-stdfilln-%EC%A0%95%EB%A6%AC

	int n = 5;
	int* p = new int[n];
	//fill(p, p + 5, 1);// a= 시작주소 or 이름, 끝날주소(헷갈림) , 초기화할 값
	fill_n(p, n, 1); // a= 시작주소 or 이름, 갯수 , 초기화할 값

	/* 중간에 주소표현 차이만 있음
	fill_n(p, 5, 1);
	fill_n(변경하려는 원소의 범위 시작주소, 변경하려는 원소 갯수, 변경 값)

	fill(p, p + 5, 1);
	fill(변경하려는 원소의 범위 시작주소, 변경하려는 원소의 범위 종료주소, 변경 값)
	*/


	// ----memset 동적 배열 초기화 (-1, 0 밖에 초기화 안됨)----
	// #include<cstring> 헤더 필요함
	//https://torbjorn.tistory.com/297


	int k = 5;
	int* q = new int[k];
	memset(q, 0, k * sizeof(int)); //q = 시작주소, 초기화할 값, 크기(포인터일때)(일반배열은 sizeof(배열이름)



	// -- vector 초기화 
	vector<int> v(8);

	fill(v.begin(), v.end(), 4);







	// 참고로 조사식에서 동적배열범위 보려면  p, 5   이렇게 범위를 지정해야됨




	printf("%d");


	return 0;
}


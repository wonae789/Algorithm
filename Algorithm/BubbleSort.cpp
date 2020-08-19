//https://www.acmicpc.net/problem/1049
// 기타줄 최소비용 구하기
#include <iostream>
using namespace std;

//버블정렬 
void BubbleSort(int arr[], int n)
{
	int i, j;
	int temp;

	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 0; j < (n - i) - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

int main()
{
	int N, M;

	cin >> N >> M;

	int* Package = new int[M];
	int* Piece = new int[M];


	for (int i = 0; i < M; i++)
	{
		cin >> Package[i] >> Piece[i];
	}

	BubbleSort(Package, M);
	BubbleSort(Piece, M);

	if (Package[0] >= Piece[0] * 6)
		cout << Piece[0] * N;
	else
	{
		//패키지 가 낱개 보다 저렴한 경우
		if (((N / 6) + 1) * Package[0] < ((N / 6) * Package[0]) + ((N % 6) * Piece[0]))
			cout << ((N / 6) + 1) * Package[0];
		//낱개가 저렴한 경우
		else
			cout << ((N / 6) * Package[0]) + ((N % 6) * Piece[0]);
	}

	return 0;
}

//#include<iostream>
//#include<algorithm>
//using namespace std;
//
//int main()
//{
//	int CutGuitar, BrandNumber; // 끊어진 기타줄, 브랜드 업체 개수
//	int Package[1000]; // 6개 패키지 가격
//	int Single[1000]; // 1개 가격
//
//	cin >> CutGuitar >> BrandNumber; // 끊어진 기타개수 와 브랜드 업체 개수를 입력 받는다.
//
//	for (int i = 0; i < BrandNumber; i++)
//	{
//		cin >> Package[i] >> Single[i]; // 브랜드 개수 많은 패키지 가격과 단품 가격을 입력 받는다.
//	}
//
//	sort(Package, Package + BrandNumber); // 내림차순으로 저렴한것 정렬
//	sort(Single, Single + BrandNumber);
//
//	if (Package[0] >= Single[0] * 6) // 비례를 따져서 단품이 저렴할경우 단품*필요갯수 하여 계산 정리.
//	{
//		cout << Single[0] * CutGuitar;
//	}
//
//	else // 세트가 저렴한경우, 세트단위를 필요한 갯수보다 (+1세트)초과하여 구매할지, 정확한 개수를 맞춰서 살지 구분하여 출력.
//	{
//		if (((CutGuitar / 6) + 1) * Package[0] < (Package[0] * (CutGuitar / 6)) + (Single[0] * (CutGuitar % 6)))
//		{
//			cout << ((CutGuitar / 6) + 1) * Package[0];
//		}
//		else
//			cout << (Package[0] * (CutGuitar / 6)) + (Single[0] * (CutGuitar % 6));
//	}
//	return 0;
//}
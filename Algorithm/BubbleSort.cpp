//https://www.acmicpc.net/problem/1049
// ��Ÿ�� �ּҺ�� ���ϱ�
#include <iostream>
using namespace std;

//�������� 
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
		//��Ű�� �� ���� ���� ������ ���
		if (((N / 6) + 1) * Package[0] < ((N / 6) * Package[0]) + ((N % 6) * Piece[0]))
			cout << ((N / 6) + 1) * Package[0];
		//������ ������ ���
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
//	int CutGuitar, BrandNumber; // ������ ��Ÿ��, �귣�� ��ü ����
//	int Package[1000]; // 6�� ��Ű�� ����
//	int Single[1000]; // 1�� ����
//
//	cin >> CutGuitar >> BrandNumber; // ������ ��Ÿ���� �� �귣�� ��ü ������ �Է� �޴´�.
//
//	for (int i = 0; i < BrandNumber; i++)
//	{
//		cin >> Package[i] >> Single[i]; // �귣�� ���� ���� ��Ű�� ���ݰ� ��ǰ ������ �Է� �޴´�.
//	}
//
//	sort(Package, Package + BrandNumber); // ������������ �����Ѱ� ����
//	sort(Single, Single + BrandNumber);
//
//	if (Package[0] >= Single[0] * 6) // ��ʸ� ������ ��ǰ�� �����Ұ�� ��ǰ*�ʿ䰹�� �Ͽ� ��� ����.
//	{
//		cout << Single[0] * CutGuitar;
//	}
//
//	else // ��Ʈ�� �����Ѱ��, ��Ʈ������ �ʿ��� �������� (+1��Ʈ)�ʰ��Ͽ� ��������, ��Ȯ�� ������ ���缭 ���� �����Ͽ� ���.
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
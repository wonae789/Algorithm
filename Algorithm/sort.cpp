#include <iostream>
#include <algorithm>

using namespace std;

int main()
{

	int a[10] = { 14,242,36,124,125,66,74,28,94,110 };
	sort(a, a + 10); // �迭 �����ּ�, �������ּ� +1 , ��������
	for (int i = 0; i < 10; i++)
	{
		cout << a[i] << ' ';
	}

	return 0;
}
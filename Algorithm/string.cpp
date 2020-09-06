//https://swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AV5PTeo6AHUDFAUq&categoryId=AV5PTeo6AHUDFAUq&categoryType=CODE
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str;
	int N;
	scanf("%d", &N);

	for (int i = 1; i <= N; i++)
	{
		int count = 0;
		str = to_string(i);

		for (int j = 0; j < str.size(); j++)
		{
			if (str[j] == '3' || str[j] == '6' || str[j] == '9')
			{
				count++;
			}
		}

		if (count == 0)
			printf("%d", i);
		else
		{
			for (int k = 0; k < count; k++)
			{
				printf("-");
			}
		}

		printf(" ");

	}



	return 0;
}
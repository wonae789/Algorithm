//https://www.acmicpc.net/problem/1924
//2007³â
#include<iostream>
using namespace std;

int main(void)
{

	int month, day;
	cin >> month >> day;

	int count = 0;

	for (int i = 1; i < month; i++)
	{
		if (i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12)
			count += 31;
		else if (i == 4 || i == 6 || i == 9 || i == 11)
			count += 30;
		else if (i == 2)
			count += 28;
	}

	if (month == 1)
		count = day;
	else
		count += day;

	switch (count % 7)
	{
	case 0:
		cout << "SUN";
		break;

	case 1:
		cout << "MON";
		break;
	case 2:
		cout << "TUE";
		break;

	case 3:
		cout << "WED";
		break;

	case 4:
		cout << "THU";
		break;

	case 5:
		cout << "FRI";
		break;

	case 6:
		cout << "SAT";
		break;



	}


	return 0;
}
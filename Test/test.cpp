#include <iostream>

int a;

void recursive(void)
{
	a++;
	recursive();
}

int main()
{

	recursive();

	return 0;
}
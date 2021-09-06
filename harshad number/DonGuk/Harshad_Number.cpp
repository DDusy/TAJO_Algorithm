#include "stdafx.h"
#include "Harshad_Number.h"

void Solution_HarshadNumber()
{
	int num;
	int sum = 0;

	cin >> num;
	int tmp = num;
	while (num> 0)
	{
		sum += (num % 10);
		num /= 10;
	}

	if (tmp % sum == 0)
		cout << "true";
	else
		cout << "false";
}
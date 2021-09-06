#include "stdafx.h"
#include "Digits_Sum.h"

void Solution_DigitsSum()
{
	int num;
	int sum = 0;

	cin >> num;

	while (num > 0)
	{
		// 주어진 수를 10으로 나눈 나머지를 더함 => 뒤에서부터 읽기
		sum += (num % 10);
		// 더한 수는 num을 / 10을 해서 없애줌
		num /= 10;
	}

	cout << sum;
}
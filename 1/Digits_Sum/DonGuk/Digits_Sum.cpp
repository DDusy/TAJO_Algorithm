#include "stdafx.h"
#include "Digits_Sum.h"

void Solution_DigitsSum()
{
	int num;
	int sum = 0;

	cin >> num;

	while (num > 0)
	{
		// �־��� ���� 10���� ���� �������� ���� => �ڿ������� �б�
		sum += (num % 10);
		// ���� ���� num�� / 10�� �ؼ� ������
		num /= 10;
	}

	cout << sum;
}
#include "stdafx.h"
#include "GCD_LCM.h"

void Solution_GCDLCM()
{
	int a, b;

	cin >> a >> b;

	int gcd = 1;
	int lcm = 1;

	// ��Ŭ���� ȣ������ ���� ū ���� ���� �� ����
	int max = a > b ? a : b;
	int min = a > b ? b : a;

	// a�� b�� �������� ����
	// �������� 0 ==> �� ������ b�� �ִ� �����
	// �������� 0�� �ƴ� ==> b�� a%b�� �������� ����
	// ���� �ݺ�
	while (min != 0)
	{
		gcd = max % min;
		max = min;
		min = gcd;
	}

	// �ִ����� ���ϱ�
	gcd = max;

	// �� ���� �ִ������� ���� �� �������� �ִ������� �� => �ּҰ����
	/*
	  2 | 12 28
	  2 |  6 14
        |  3  7

	  �ִ����� = 4
	  �ּҰ���� = 4 * 3 * 7 = 84
	*/
	max = a / gcd;
	min = b / gcd;
	lcm = gcd * max * min;

	cout << gcd << " // " << lcm;
}
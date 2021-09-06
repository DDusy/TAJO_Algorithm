#include "stdafx.h"
#include "Find_PrimeNumber.h"

void Solution_FindPrimeNumber()
{
	int num;
	bool * pPrime = nullptr;

	cin >> num;

	// num��ŭ�� bool ���� ���� �Ҵ�
	pPrime = new bool[num];

	// pPrime �迭 �ʱ�ȭ
	for (int i = 0; i < num; ++i)
		pPrime[i] = true;

	// 1�� �Ҽ��� �ƴϹǷ� ����
	pPrime[0] = false;

	for (int i = 2; i <= num - 1; ++i)
	{
		// i�� ������ i�� ����� ���� ����
		// i : 2 => 4, 6, 8, 10, .....
		// i : 3 => 6, 9, 12, 15, .....
		for (int j = i * 2 - 1; j < num; j += i)
		{
			pPrime[j] = false;
		}
	}

	// true�� ������ ī��Ʈ�ؼ� ���
	int count = 0;
	for (int i = 0; i < num; ++i)
	{
		if (pPrime[i])
			++count;
	}

	cout << count;

	delete[] pPrime;
}

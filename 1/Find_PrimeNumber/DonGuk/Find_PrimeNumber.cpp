#include "stdafx.h"
#include "Find_PrimeNumber.h"

void Solution_FindPrimeNumber()
{
	int num;
	bool * pPrime = nullptr;

	cin >> num;

	// num만큼의 bool 변수 공간 할당
	pPrime = new bool[num];

	// pPrime 배열 초기화
	for (int i = 0; i < num; ++i)
		pPrime[i] = true;

	// 1은 소수가 아니므로 제외
	pPrime[0] = false;

	for (int i = 2; i <= num - 1; ++i)
	{
		// i를 제외한 i의 배수를 전부 제외
		// i : 2 => 4, 6, 8, 10, .....
		// i : 3 => 6, 9, 12, 15, .....
		for (int j = i * 2 - 1; j < num; j += i)
		{
			pPrime[j] = false;
		}
	}

	// true의 갯수를 카운트해서 출력
	int count = 0;
	for (int i = 0; i < num; ++i)
	{
		if (pPrime[i])
			++count;
	}

	cout << count;

	delete[] pPrime;
}
